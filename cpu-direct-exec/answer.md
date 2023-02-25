The first question asks to estimate the costs of a system call and context switch.

System Call:
  system_call.c uses a simple system call (0-byte read), times how long it takes, an divides the time by the number of iterations to get an estimate of the cost of a system call.

  At 1 iteration, [1.00 - 3.00] us/syscall
  At 1,000 iterations, [0.39 - 0.41] us/syscall
  At 1,000,000 iterations, [0.20 - 0.21] us/syscall
  At 10,000,000 iterations, [0.20 - 0.21] us/syscall

  The asymptote of simple system call cost appears to approach 0.20 us/syscall.  Interestingly, the first syscall takes 1 - 3 us.

Context Switch:
  context_switch.c sets up a parent and child process with fork(), opens two pipes with pipe(), and then writes and reads between them.  Timing is measured by the parent process, and the total elapsed time is divided by two (to account for the two context switches).

  I set both processes to the first CPU core using sched_setaffinity().

  I ran about 20 iterations and found that context switches ranged from [73.5 - 94.5] us/context switch.