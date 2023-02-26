#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* 8. Write a program that creates two children, and connects the stan-
dard output of one to the standard input of the other, using the
pipe() system call. */

int main(int argc, char *argv[]) {
  int fd[2];
  pid_t p1, p2;

  pipe(fd); // pipe for first child to write to and for second child to read from

  p1 = fork(); // first child - writes
  p2 = fork(); // second child - reads

  if (p1 == 0) {  // first child writes to pipe and closes write end
    char write_str[] = "Hello there.\n";
    write(fd[1], write_str, strlen(write_str) + 1);
    close(fd[1]);
  } else if (p2 == 0) {  
    /* second child waits for first child to finish, then reads
    from pipe, closes read end, and prints out string (and
    additional string if it worked)
    */

    waitpid(p1, NULL, 0);
    char read_str[100];
    read(fd[0], read_str, 100);
    printf("%s", read_str);
    close(fd[0]);
    if (strcmp("Hello there.\n", read_str) == 0) { // check that the read worked
      printf("General Kenobi!  You are a bold one.\n");
    }
  }
}
