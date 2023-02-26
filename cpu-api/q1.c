#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* 1. Write a program that calls fork(). Before calling fork(), have the
main process access a variable (e.g., x) and set its value to some-
thing (e.g., 100). What value is the variable in the child process?
What happens to the variable when both the child and parent change
the value of x? */

int main(int argc, char *argv[]) {
  int x, p;

  x = 100;

  p = fork();

  if (p > 0) {  // parent
    printf("Parent: x = %d\n", x);
  } else {
    printf(" Child: x = %d\n", x);
  }
  return 0;
}
