#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

/* 5. Now write a program that uses wait() to wait for the child process
to finish in the parent. What does wait() return? What happens if
you use wait() in the child? */

int main(int argc, char *argv[]) {
  int p;
  pid_t w;

  p = fork();

  if (p < 0) {  // fork failed
    fprintf(stderr, "fork failed\n");
    exit(1);
  } else if (p == 0) {  // child
    w = wait(NULL);
    printf("child pid: %d\nwait return is %d\n", getpid(), w);
  } else {  // parent
    w = wait(NULL);
    printf("parent pid: %d\nwait return is child pid: %d\n", getpid(), w);

  }
}
