#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* 7. Write a program that creates a child process, and then in the child
closes standard output (STDOUT FILENO). What happens if the child
calls printf() to print some output after closing the descriptor? */\

int main(int argc, char *argv[]) {
  int p;

  p = fork();

  if (p < 0) {
    fprintf(stderr, "fork failed\n");
    exit(1);
  } else if (p == 0) {  // child
    close(STDOUT_FILENO);
    printf("What do we have here?\n");
  }
}
