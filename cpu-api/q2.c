#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/* 2. Write a program that opens a file (with the open() system call)
and then calls fork() to create a new process. Can both the child
and parent access the file descriptor returned by open()? What
happens when they are writing to the file concurrently, i.e., at the
same time? */

int main(int argc, char *argv[]) {
  int fd, p;
  char buffer[200];
  
  fd = open("q2.txt", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);

  p = fork();

  if (p < 0) { // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
  } else if (p > 0) { // parent
    sprintf(buffer, "All work and no play makes Jack a dull boy.");
    write(fd, buffer, strlen(buffer));
  } else {  // child
    sprintf(buffer, "Here's Johnny!");
    write(fd, buffer, strlen(buffer));
  }
  return 0;
}
