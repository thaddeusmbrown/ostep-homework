#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/* 4. Write a program that calls fork() and then calls some form of
exec() to run the program /bin/ls. See if you can try all of the
variants of exec(), including (on Linux) execl(), execle(),
execlp(), execv(), execvp(), and execvpe(). Why do
you think there are so many variants of the same basic call? */

int main(int argc, char *argv[]) {
  int p;

  p = fork();

  char *args[2];
  args[0] = strdup("ls");
  args[1] = NULL;
  execvpe(args[0], args, __environ);
}
