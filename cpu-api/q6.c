#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

/* 6. Write a slight modification of the previous program, this time us-
ing waitpid() instead of wait(). When would waitpid() be
useful? */

int main(int argc, char *argv[]) {
  int p;
  pid_t w;

  p = fork();

  if (p < 0) {  // fork failed
    fprintf(stderr, "fork failed\n");
    exit(1);
  } else if (p == 0) {  // child
    printf("child pid: %d\n", getpid());
  } else {  // parent
    w = waitpid(-1, NULL, 0);
    printf("parent pid: %d\nwait return is child pid: %d\n", getpid(), w);

  }
}
