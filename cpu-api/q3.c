#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* 3. Write another program using fork(). The child process should
print “hello”; the parent process should print “goodbye”. You should
try to ensure that the child process always prints first; can you do
this without calling wait() in the parent? */

int main(int argc, char *argv[]) {
  int p;

  p = fork();

  if (p < 0) {
    fprintf(stderr, "fork failed\n");
    exit(1);
  } else if (p == 0) {  // child
    printf("hello\n");
  } else {  // parent
    wait(NULL);
    printf("goodbye\n");
  }
  return 0;
}
