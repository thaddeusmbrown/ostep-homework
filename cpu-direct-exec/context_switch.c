#define _GNU_SOURCE

#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

/* set up two processes (A and B) that write and read from 
each other, using a timer to estimate the cost of
context switches as the scheduler alternates between
Process A and Process B */

/* pipe set up inspired by https://www.geeksforgeeks.org/c-program-demonstrate-fork-and-pipe/ */
int main() {
  cpu_set_t *cpusetp;
  size_t size;

  int fd1[2];
  int fd2[2];

  int s0, sf, u0, uf, usec;
  struct timeval t0, tf;

  pid_t pid;
  char str[10];
  float cost;
  
  pipe(fd1); // pipe for parent process
  pipe(fd2); // pipe for child process

  pid = fork(); // child process will read and write other side of pipes

  // set processes to first cpu
  cpusetp = CPU_ALLOC(4);
  size = CPU_ALLOC_SIZE(4);

  CPU_SET(0, cpusetp);
  sched_setaffinity(getpid(), sizeof(cpusetp), cpusetp);

  if (pid > 0) {                          // parent
    
    close(fd1[0]);                        // close first pipe's read

    gettimeofday(&t0, NULL);              // mark start time
    write(fd1[1], str, strlen(str) + 1);  // write, then close write end of first pipe
    close(fd1[1]);

    wait(NULL);                           // wait for child write
    gettimeofday(&tf, NULL);              // mark end time

    s0 = t0.tv_sec;
    u0 = t0.tv_usec;

    sf = tf.tv_sec;
    uf = tf.tv_usec;

    usec = (sf * 1000000 + uf) - (s0 * 1000000 + u0);
    cost = usec / 2.0; // elapsed time divided by two context switches

    printf("   Initial: %d seconds and %d microseconds\n  Final: %d seconds and %d microseconds\n\n", s0, u0, sf, uf);
    printf("Total Time: %d us\n", usec);
    printf("      Cost: %1.2f us/context switch\n", cost);
  } else {
    close(fd1[1]);                        // close write end of first pipe

    // read string from first pipe
    char read_str[10];
    read(fd1[0], read_str, 10);

    // close read ends
    close(fd1[0]);
    close(fd2[0]);

    // write to write end of second pipe and close
    write(fd2[1], read_str, strlen(read_str) + 1);
    close(fd2[1]);

    exit(0);
  }
}
