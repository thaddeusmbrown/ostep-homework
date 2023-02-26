1.  The value of x is the same in the parent and child where x is assigned before the fork
2.  Both parent and child can write to the same file.  The second process that runs simply appends to the end of the document (assuming the flags are set up that way)
3.  I was able to get hello to print before goodbye by using wait()... not sure how I would accomplish this based on what I have learned so far.  May return at some point to implement this if I find a reliable method.
4.  execl --> this prints the output of ls twice
    execlp --> this has the same functionality.  Looking at man pages, "p" means that PATH will be searched for a matching file to execute, usually in /usr/bin.  I verified this by removing "/bin/", in which case execlp still works but execl does not.
    execle --> this requires an environment variable that is an array of pointers to consts of the form "name=VALUE".  You can set up custom environments.  Without "e", exec uses a default environment from the external variable 'environ'. You can get this to work by subbing in __environ for that environment variable.  With an empty array, the function does not work. This does not have the same path ability as the "p" variant, meaning you have to specify "/bin/ls".
    execv --> similar to execl, but variables are supplied in array instead of sequential char pointers
    execvp --> similar to execlp, but variables supplied as array instead of sequential char pointers
    execvpe --> similar to execle, but variables supplied as array instead of sequential char pointers.  This also has the PATH functionality of execvp built in.  You must define _GUN_SOURCE as well for this to work.

    Clearly, there are many variants of the same call because there is power in having separate formats for providing variables as a list or as an array, as well as optionality in terms of specifying or assuming default PATH and environment variables.
5.  wait() returns a value with type pid_t.  This is just the child process id.  If you use wait(0) in the child process, it returns -1, meaning there is an error.  Clearly, a process cannot wait if there are no children to wait for.  Patience is only learned through parenthood, apparently.
6.  waitpid() allows you to specify some information regarding what specific child (or any child) you want to wait for, as well as provide some options for when to return.  Additional options allow specification of information to return in the pid_t value.
7.  Nothing prints to the shell if the child closes STDOUT_FILENO first
8.  See q8.c