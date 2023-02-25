#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#define ITER 10000000

main() {
  struct timeval t0, tf;
  int i, s0, sf, u0, uf, usec;
  float cost;
  
  gettimeofday(&t0, NULL);
  for(i = 0; i < ITER; ++i) {
      read(0, 0, 0);
  }
  gettimeofday(&tf, NULL);

  s0 = t0.tv_sec;
  u0 = t0.tv_usec;

  sf = tf.tv_sec;
  uf = tf.tv_usec;

  usec = (sf * 1000000 + uf) - (s0 * 1000000 + u0);
  cost = usec / (float) ITER;

  printf("Initial: %d seconds and %d microseconds\n  final: %d seconds and %d microseconds\n\n", s0, u0, sf, uf);
  printf("Total Time: %d us\n", usec);
  printf("Iterations: %d\n\n", ITER);
  printf("      Cost: %1.2f us/syscall\n", cost);
}
