# Question 1

Run a few randomly-generated problems with just two jobs and
two queues; compute the MLFQ execution trace for each. Make
your life easier by limiting the length of each job and turning off
I/Os.
___

## Input 1
```console
./mlfq.py -j 2 -n 2 -m 20 -M 0 -s 0 -c
```
## Output 1
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 2
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime  17 - ioFreq   0
  Job  1: startTime   0 - runTime   8 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 16 (of 17) ]
[ time 1 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 15 (of 17) ]
[ time 2 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 14 (of 17) ]
[ time 3 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 13 (of 17) ]
[ time 4 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 12 (of 17) ]
[ time 5 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 11 (of 17) ]
[ time 6 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 10 (of 17) ]
[ time 7 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 9 (of 17) ]
[ time 8 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 8 (of 17) ]
[ time 9 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 7 (of 17) ]
[ time 10 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 7 (of 8) ]
[ time 11 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 6 (of 8) ]
[ time 12 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 5 (of 8) ]
[ time 13 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 4 (of 8) ]
[ time 14 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 3 (of 8) ]
[ time 15 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 2 (of 8) ]
[ time 16 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 1 (of 8) ]
[ time 17 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 0 (of 8) ]
[ time 18 ] FINISHED JOB 1
[ time 18 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 6 (of 17) ]
[ time 19 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 5 (of 17) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 4 (of 17) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 3 (of 17) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 2 (of 17) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 1 (of 17) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 0 (of 17) ]
[ time 25 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround  25
  Job  1: startTime   0 - response  10 - turnaround  18

  Avg  1: startTime n/a - response 5.00 - turnaround 21.50
```
___

## Input 2
```console
./mlfq.py -j 2 -n 2 -m 20 -M 0 -s 1 -c
```

## Output 2
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 2
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime   3 - ioFreq   0
  Job  1: startTime   0 - runTime  15 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 2 (of 3) ]
[ time 1 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 1 (of 3) ]
[ time 2 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 0 (of 3) ]
[ time 3 ] FINISHED JOB 0
[ time 3 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 14 (of 15) ]
[ time 4 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 13 (of 15) ]
[ time 5 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 12 (of 15) ]
[ time 6 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 11 (of 15) ]
[ time 7 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 10 (of 15) ]
[ time 8 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 9 (of 15) ]
[ time 9 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 8 (of 15) ]
[ time 10 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 7 (of 15) ]
[ time 11 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 6 (of 15) ]
[ time 12 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 5 (of 15) ]
[ time 13 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 4 (of 15) ]
[ time 14 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 3 (of 15) ]
[ time 15 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 2 (of 15) ]
[ time 16 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 1 (of 15) ]
[ time 17 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 0 (of 15) ]
[ time 18 ] FINISHED JOB 1

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround   3
  Job  1: startTime   0 - response   3 - turnaround  18

  Avg  1: startTime n/a - response 1.50 - turnaround 10.50
```
___
## Input 3
```console
./mlfq.py -j 2 -n 2 -m 20 -M 0 -s 2 -c
```

## Output 3
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 2
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime  19 - ioFreq   0
  Job  1: startTime   0 - runTime   2 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 18 (of 19) ]
[ time 1 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 17 (of 19) ]
[ time 2 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 16 (of 19) ]
[ time 3 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 15 (of 19) ]
[ time 4 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 14 (of 19) ]
[ time 5 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 13 (of 19) ]
[ time 6 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 12 (of 19) ]
[ time 7 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 11 (of 19) ]
[ time 8 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 10 (of 19) ]
[ time 9 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 9 (of 19) ]
[ time 10 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 1 (of 2) ]
[ time 11 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 0 (of 2) ]
[ time 12 ] FINISHED JOB 1
[ time 12 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 8 (of 19) ]
[ time 13 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 7 (of 19) ]
[ time 14 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 6 (of 19) ]
[ time 15 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 5 (of 19) ]
[ time 16 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 4 (of 19) ]
[ time 17 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 3 (of 19) ]
[ time 18 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 2 (of 19) ]
[ time 19 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 1 (of 19) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 0 (of 19) ]
[ time 21 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround  21
  Job  1: startTime   0 - response  10 - turnaround  12

  Avg  1: startTime n/a - response 5.00 - turnaround 16.50
```

# Question 2
How would you run the scheduler to reproduce each of the exam-
ples in the chapter?
___
## Example 1: A Single Long-Running Job
![Figure 8.2: Long-running Job Over Time](/images/Figure%208.2.png)

For this example, I would run 1 job, 3 queues, 10 ms quanta, with no IO.
___
### Input
```console
./mlfq.py -j 1 -n 3 -Q 10,10,10 --jlist 0,200,0 -s 0 -c
```
___
### Output
```console
Here is the list of inputs:
OPTIONS jobs 1
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 200 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 199 (of 200) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 198 (of 200) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 197 (of 200) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 196 (of 200) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 195 (of 200) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 194 (of 200) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 193 (of 200) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 192 (of 200) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 191 (of 200) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 190 (of 200) ]
[ time 10 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 189 (of 200) ]
[ time 11 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 188 (of 200) ]
[ time 12 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 187 (of 200) ]
[ time 13 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 186 (of 200) ]
[ time 14 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 185 (of 200) ]
[ time 15 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 184 (of 200) ]
[ time 16 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 183 (of 200) ]
[ time 17 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 182 (of 200) ]
[ time 18 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 181 (of 200) ]
[ time 19 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 180 (of 200) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 179 (of 200) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 178 (of 200) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 177 (of 200) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 176 (of 200) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 175 (of 200) ]
[ time 25 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 174 (of 200) ]
[ time 26 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 173 (of 200) ]
[ time 27 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 172 (of 200) ]
[ time 28 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 171 (of 200) ]
[ time 29 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 170 (of 200) ]
[ time 30 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 169 (of 200) ]
[ time 31 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 168 (of 200) ]
[ time 32 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 167 (of 200) ]
[ time 33 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 166 (of 200) ]
[ time 34 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 165 (of 200) ]
[ time 35 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 164 (of 200) ]
[ time 36 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 163 (of 200) ]
[ time 37 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 162 (of 200) ]
[ time 38 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 161 (of 200) ]
[ time 39 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 160 (of 200) ]
[ time 40 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 159 (of 200) ]
[ time 41 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 158 (of 200) ]
[ time 42 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 157 (of 200) ]
[ time 43 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 156 (of 200) ]
[ time 44 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 155 (of 200) ]
[ time 45 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 154 (of 200) ]
[ time 46 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 153 (of 200) ]
[ time 47 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 152 (of 200) ]
[ time 48 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 151 (of 200) ]
[ time 49 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 150 (of 200) ]
[ time 50 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 149 (of 200) ]
[ time 51 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 148 (of 200) ]
[ time 52 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 147 (of 200) ]
[ time 53 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 146 (of 200) ]
[ time 54 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 145 (of 200) ]
[ time 55 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 144 (of 200) ]
[ time 56 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 143 (of 200) ]
[ time 57 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 142 (of 200) ]
[ time 58 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 141 (of 200) ]
[ time 59 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 140 (of 200) ]
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 139 (of 200) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 138 (of 200) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 137 (of 200) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 136 (of 200) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 135 (of 200) ]
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 134 (of 200) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 133 (of 200) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 132 (of 200) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 131 (of 200) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 130 (of 200) ]
[ time 70 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 129 (of 200) ]
[ time 71 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 128 (of 200) ]
[ time 72 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 127 (of 200) ]
[ time 73 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 126 (of 200) ]
[ time 74 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 125 (of 200) ]
[ time 75 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 124 (of 200) ]
[ time 76 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 123 (of 200) ]
[ time 77 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 122 (of 200) ]
[ time 78 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 121 (of 200) ]
[ time 79 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 120 (of 200) ]
[ time 80 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 119 (of 200) ]
[ time 81 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 118 (of 200) ]
[ time 82 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 117 (of 200) ]
[ time 83 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 116 (of 200) ]
[ time 84 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 115 (of 200) ]
[ time 85 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 114 (of 200) ]
[ time 86 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 113 (of 200) ]
[ time 87 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 112 (of 200) ]
[ time 88 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 111 (of 200) ]
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 110 (of 200) ]
[ time 90 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 109 (of 200) ]
[ time 91 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 108 (of 200) ]
[ time 92 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 107 (of 200) ]
[ time 93 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 106 (of 200) ]
[ time 94 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 105 (of 200) ]
[ time 95 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 104 (of 200) ]
[ time 96 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 103 (of 200) ]
[ time 97 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 102 (of 200) ]
[ time 98 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 101 (of 200) ]
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 100 (of 200) ]
[ time 100 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 99 (of 200) ]
[ time 101 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 98 (of 200) ]
[ time 102 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 97 (of 200) ]
[ time 103 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 96 (of 200) ]
[ time 104 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 95 (of 200) ]
[ time 105 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 94 (of 200) ]
[ time 106 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 93 (of 200) ]
[ time 107 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 92 (of 200) ]
[ time 108 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 91 (of 200) ]
[ time 109 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 90 (of 200) ]
[ time 110 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 89 (of 200) ]
[ time 111 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 88 (of 200) ]
[ time 112 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 87 (of 200) ]
[ time 113 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 86 (of 200) ]
[ time 114 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 85 (of 200) ]
[ time 115 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 84 (of 200) ]
[ time 116 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 83 (of 200) ]
[ time 117 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 82 (of 200) ]
[ time 118 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 81 (of 200) ]
[ time 119 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 80 (of 200) ]
[ time 120 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 200) ]
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 200) ]
[ time 122 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 200) ]
[ time 123 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 200) ]
[ time 124 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 200) ]
[ time 125 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 200) ]
[ time 126 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 200) ]
[ time 127 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 200) ]
[ time 128 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 200) ]
[ time 129 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 200) ]
[ time 130 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 69 (of 200) ]
[ time 131 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 68 (of 200) ]
[ time 132 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 67 (of 200) ]
[ time 133 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 66 (of 200) ]
[ time 134 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 65 (of 200) ]
[ time 135 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 64 (of 200) ]
[ time 136 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 63 (of 200) ]
[ time 137 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 62 (of 200) ]
[ time 138 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 61 (of 200) ]
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 60 (of 200) ]
[ time 140 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 59 (of 200) ]
[ time 141 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 58 (of 200) ]
[ time 142 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 57 (of 200) ]
[ time 143 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 56 (of 200) ]
[ time 144 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 55 (of 200) ]
[ time 145 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 54 (of 200) ]
[ time 146 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 53 (of 200) ]
[ time 147 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 52 (of 200) ]
[ time 148 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 51 (of 200) ]
[ time 149 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 50 (of 200) ]
[ time 150 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 200) ]
[ time 151 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 200) ]
[ time 152 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 200) ]
[ time 153 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 200) ]
[ time 154 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 200) ]
[ time 155 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 200) ]
[ time 156 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 200) ]
[ time 157 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 200) ]
[ time 158 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 200) ]
[ time 159 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 200) ]
[ time 160 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 200) ]
[ time 161 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 200) ]
[ time 162 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 200) ]
[ time 163 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 200) ]
[ time 164 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 200) ]
[ time 165 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 200) ]
[ time 166 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 200) ]
[ time 167 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 200) ]
[ time 168 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 200) ]
[ time 169 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 200) ]
[ time 170 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 200) ]
[ time 171 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 200) ]
[ time 172 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 200) ]
[ time 173 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 200) ]
[ time 174 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 200) ]
[ time 175 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 200) ]
[ time 176 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 200) ]
[ time 177 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 200) ]
[ time 178 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 200) ]
[ time 179 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 200) ]
[ time 180 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 200) ]
[ time 181 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 200) ]
[ time 182 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 200) ]
[ time 183 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 200) ]
[ time 184 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 200) ]
[ time 185 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 200) ]
[ time 186 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 200) ]
[ time 187 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 200) ]
[ time 188 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 200) ]
[ time 189 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 200) ]
[ time 190 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 200) ]
[ time 191 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 200) ]
[ time 192 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 200) ]
[ time 193 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 200) ]
[ time 194 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 200) ]
[ time 195 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 200) ]
[ time 196 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 200) ]
[ time 197 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 200) ]
[ time 198 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 200) ]
[ time 199 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 200) ]
[ time 200 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 200

  Avg  0: startTime n/a - response 0.00 - turnaround 200.00
```
___
## Example 2: Along Came A Short Job
![Figure 8.3: Along Came an Interactive Job](/images/Figure%208.3.png)

To run this example, I would run two jobs, one with startTime 0, runTime 180, ioFreq 0, and another with startTime 100, runTime 20, ioFreq 0.  I would use three queues, each with 10 ms quanta.
___
### Input
```console
./mlfq.py --jlist=0,180,0:100,20,0 -n 3 -Q 10,10,10 -s 0 -c
```
___
### Output
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 5
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 180 - ioFreq   0
  Job  1: startTime 100 - runTime  20 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 179 (of 180) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 178 (of 180) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 177 (of 180) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 176 (of 180) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 175 (of 180) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 174 (of 180) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 173 (of 180) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 172 (of 180) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 171 (of 180) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 170 (of 180) ]
[ time 10 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 169 (of 180) ]
[ time 11 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 168 (of 180) ]
[ time 12 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 167 (of 180) ]
[ time 13 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 166 (of 180) ]
[ time 14 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 165 (of 180) ]
[ time 15 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 164 (of 180) ]
[ time 16 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 163 (of 180) ]
[ time 17 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 162 (of 180) ]
[ time 18 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 161 (of 180) ]
[ time 19 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 160 (of 180) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 159 (of 180) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 158 (of 180) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 157 (of 180) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 156 (of 180) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 155 (of 180) ]
[ time 25 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 154 (of 180) ]
[ time 26 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 153 (of 180) ]
[ time 27 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 152 (of 180) ]
[ time 28 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 151 (of 180) ]
[ time 29 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 150 (of 180) ]
[ time 30 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 149 (of 180) ]
[ time 31 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 148 (of 180) ]
[ time 32 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 147 (of 180) ]
[ time 33 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 146 (of 180) ]
[ time 34 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 145 (of 180) ]
[ time 35 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 144 (of 180) ]
[ time 36 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 143 (of 180) ]
[ time 37 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 142 (of 180) ]
[ time 38 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 141 (of 180) ]
[ time 39 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 140 (of 180) ]
[ time 40 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 139 (of 180) ]
[ time 41 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 138 (of 180) ]
[ time 42 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 137 (of 180) ]
[ time 43 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 136 (of 180) ]
[ time 44 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 135 (of 180) ]
[ time 45 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 134 (of 180) ]
[ time 46 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 133 (of 180) ]
[ time 47 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 132 (of 180) ]
[ time 48 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 131 (of 180) ]
[ time 49 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 130 (of 180) ]
[ time 50 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 129 (of 180) ]
[ time 51 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 128 (of 180) ]
[ time 52 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 127 (of 180) ]
[ time 53 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 126 (of 180) ]
[ time 54 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 125 (of 180) ]
[ time 55 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 124 (of 180) ]
[ time 56 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 123 (of 180) ]
[ time 57 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 122 (of 180) ]
[ time 58 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 121 (of 180) ]
[ time 59 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 120 (of 180) ]
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 119 (of 180) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 118 (of 180) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 117 (of 180) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 116 (of 180) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 115 (of 180) ]
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 114 (of 180) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 113 (of 180) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 112 (of 180) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 111 (of 180) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 110 (of 180) ]
[ time 70 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 109 (of 180) ]
[ time 71 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 108 (of 180) ]
[ time 72 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 107 (of 180) ]
[ time 73 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 106 (of 180) ]
[ time 74 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 105 (of 180) ]
[ time 75 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 104 (of 180) ]
[ time 76 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 103 (of 180) ]
[ time 77 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 102 (of 180) ]
[ time 78 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 101 (of 180) ]
[ time 79 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 100 (of 180) ]
[ time 80 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 99 (of 180) ]
[ time 81 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 98 (of 180) ]
[ time 82 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 97 (of 180) ]
[ time 83 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 96 (of 180) ]
[ time 84 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 95 (of 180) ]
[ time 85 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 94 (of 180) ]
[ time 86 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 93 (of 180) ]
[ time 87 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 92 (of 180) ]
[ time 88 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 91 (of 180) ]
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 90 (of 180) ]
[ time 90 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 89 (of 180) ]
[ time 91 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 88 (of 180) ]
[ time 92 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 87 (of 180) ]
[ time 93 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 86 (of 180) ]
[ time 94 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 85 (of 180) ]
[ time 95 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 84 (of 180) ]
[ time 96 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 83 (of 180) ]
[ time 97 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 82 (of 180) ]
[ time 98 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 81 (of 180) ]
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 80 (of 180) ]
[ time 100 ] JOB BEGINS by JOB 1
[ time 100 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 20) ]
[ time 101 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 18 (of 20) ]
[ time 102 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 17 (of 20) ]
[ time 103 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 16 (of 20) ]
[ time 104 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 15 (of 20) ]
[ time 105 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 14 (of 20) ]
[ time 106 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 13 (of 20) ]
[ time 107 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 12 (of 20) ]
[ time 108 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 11 (of 20) ]
[ time 109 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 10 (of 20) ]
[ time 110 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 9 (of 20) ]
[ time 111 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 8 (of 20) ]
[ time 112 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 7 (of 20) ]
[ time 113 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 6 (of 20) ]
[ time 114 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 5 (of 20) ]
[ time 115 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 4 (of 20) ]
[ time 116 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 3 (of 20) ]
[ time 117 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 2 (of 20) ]
[ time 118 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 1 (of 20) ]
[ time 119 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 0 (of 20) ]
[ time 120 ] FINISHED JOB 1
[ time 120 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 180) ]
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 180) ]
[ time 122 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 180) ]
[ time 123 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 180) ]
[ time 124 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 180) ]
[ time 125 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 180) ]
[ time 126 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 180) ]
[ time 127 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 180) ]
[ time 128 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 180) ]
[ time 129 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 180) ]
[ time 130 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 69 (of 180) ]
[ time 131 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 68 (of 180) ]
[ time 132 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 67 (of 180) ]
[ time 133 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 66 (of 180) ]
[ time 134 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 65 (of 180) ]
[ time 135 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 64 (of 180) ]
[ time 136 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 63 (of 180) ]
[ time 137 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 62 (of 180) ]
[ time 138 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 61 (of 180) ]
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 60 (of 180) ]
[ time 140 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 59 (of 180) ]
[ time 141 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 58 (of 180) ]
[ time 142 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 57 (of 180) ]
[ time 143 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 56 (of 180) ]
[ time 144 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 55 (of 180) ]
[ time 145 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 54 (of 180) ]
[ time 146 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 53 (of 180) ]
[ time 147 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 52 (of 180) ]
[ time 148 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 51 (of 180) ]
[ time 149 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 50 (of 180) ]
[ time 150 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 180) ]
[ time 151 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 180) ]
[ time 152 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 180) ]
[ time 153 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 180) ]
[ time 154 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 180) ]
[ time 155 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 180) ]
[ time 156 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 180) ]
[ time 157 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 180) ]
[ time 158 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 180) ]
[ time 159 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 180) ]
[ time 160 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 180) ]
[ time 161 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 180) ]
[ time 162 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 180) ]
[ time 163 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 180) ]
[ time 164 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 180) ]
[ time 165 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 180) ]
[ time 166 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 180) ]
[ time 167 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 180) ]
[ time 168 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 180) ]
[ time 169 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 180) ]
[ time 170 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 180) ]
[ time 171 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 180) ]
[ time 172 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 180) ]
[ time 173 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 180) ]
[ time 174 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 180) ]
[ time 175 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 180) ]
[ time 176 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 180) ]
[ time 177 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 180) ]
[ time 178 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 180) ]
[ time 179 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 180) ]
[ time 180 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 180) ]
[ time 181 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 180) ]
[ time 182 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 180) ]
[ time 183 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 180) ]
[ time 184 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 180) ]
[ time 185 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 180) ]
[ time 186 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 180) ]
[ time 187 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 180) ]
[ time 188 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 180) ]
[ time 189 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 180) ]
[ time 190 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 180) ]
[ time 191 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 180) ]
[ time 192 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 180) ]
[ time 193 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 180) ]
[ time 194 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 180) ]
[ time 195 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 180) ]
[ time 196 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 180) ]
[ time 197 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 180) ]
[ time 198 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 180) ]
[ time 199 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 180) ]
[ time 200 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 200
  Job  1: startTime 100 - response   0 - turnaround  20

  Avg  1: startTime n/a - response 0.00 - turnaround 110.00
```
___
## Example 3: What about I/O?
### Attempt 1
![Figure 8.4: A Mixed I/O-intensive and CPU-intensive Workload](/images/Figure%208.4.png)

For this example, I would run two jobs:

One CPU-intensive process with startTime 0, runTime 180, ioFreq 0

One I/O-intensive process with startTime 50, runTime 20, ioFreq 1

There are three queues with quanta of 10 ms, ioTIME 6, stayAfterIO True
___
#### Input
```console
./mlfq.py --jlist=0,180,0:50,20,1 -n 3 -Q 10,10,10 -i 6 -S -s 0 -c
```
___
#### Output
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 6
OPTIONS stayAfterIO True
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 180 - ioFreq   0
  Job  1: startTime  50 - runTime  20 - ioFreq   1


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 179 (of 180) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 178 (of 180) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 177 (of 180) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 176 (of 180) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 175 (of 180) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 174 (of 180) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 173 (of 180) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 172 (of 180) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 171 (of 180) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 170 (of 180) ]
[ time 10 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 169 (of 180) ]
[ time 11 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 168 (of 180) ]
[ time 12 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 167 (of 180) ]
[ time 13 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 166 (of 180) ]
[ time 14 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 165 (of 180) ]
[ time 15 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 164 (of 180) ]
[ time 16 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 163 (of 180) ]
[ time 17 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 162 (of 180) ]
[ time 18 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 161 (of 180) ]
[ time 19 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 160 (of 180) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 159 (of 180) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 158 (of 180) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 157 (of 180) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 156 (of 180) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 155 (of 180) ]
[ time 25 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 154 (of 180) ]
[ time 26 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 153 (of 180) ]
[ time 27 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 152 (of 180) ]
[ time 28 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 151 (of 180) ]
[ time 29 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 150 (of 180) ]
[ time 30 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 149 (of 180) ]
[ time 31 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 148 (of 180) ]
[ time 32 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 147 (of 180) ]
[ time 33 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 146 (of 180) ]
[ time 34 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 145 (of 180) ]
[ time 35 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 144 (of 180) ]
[ time 36 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 143 (of 180) ]
[ time 37 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 142 (of 180) ]
[ time 38 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 141 (of 180) ]
[ time 39 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 140 (of 180) ]
[ time 40 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 139 (of 180) ]
[ time 41 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 138 (of 180) ]
[ time 42 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 137 (of 180) ]
[ time 43 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 136 (of 180) ]
[ time 44 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 135 (of 180) ]
[ time 45 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 134 (of 180) ]
[ time 46 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 133 (of 180) ]
[ time 47 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 132 (of 180) ]
[ time 48 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 131 (of 180) ]
[ time 49 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 130 (of 180) ]
[ time 50 ] JOB BEGINS by JOB 1
[ time 50 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 20) ]
[ time 51 ] IO_START by JOB 1
IO DONE
[ time 51 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 129 (of 180) ]
[ time 52 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 128 (of 180) ]
[ time 53 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 127 (of 180) ]
[ time 54 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 126 (of 180) ]
[ time 55 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 125 (of 180) ]
[ time 56 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 124 (of 180) ]
[ time 57 ] IO_DONE by JOB 1
[ time 57 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 18 (of 20) ]
[ time 58 ] IO_START by JOB 1
IO DONE
[ time 58 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 123 (of 180) ]
[ time 59 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 122 (of 180) ]
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 121 (of 180) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 120 (of 180) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 119 (of 180) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 118 (of 180) ]
[ time 64 ] IO_DONE by JOB 1
[ time 64 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 17 (of 20) ]
[ time 65 ] IO_START by JOB 1
IO DONE
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 117 (of 180) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 116 (of 180) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 115 (of 180) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 114 (of 180) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 113 (of 180) ]
[ time 70 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 112 (of 180) ]
[ time 71 ] IO_DONE by JOB 1
[ time 71 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 16 (of 20) ]
[ time 72 ] IO_START by JOB 1
IO DONE
[ time 72 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 111 (of 180) ]
[ time 73 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 110 (of 180) ]
[ time 74 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 109 (of 180) ]
[ time 75 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 108 (of 180) ]
[ time 76 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 107 (of 180) ]
[ time 77 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 106 (of 180) ]
[ time 78 ] IO_DONE by JOB 1
[ time 78 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 15 (of 20) ]
[ time 79 ] IO_START by JOB 1
IO DONE
[ time 79 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 105 (of 180) ]
[ time 80 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 104 (of 180) ]
[ time 81 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 103 (of 180) ]
[ time 82 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 102 (of 180) ]
[ time 83 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 101 (of 180) ]
[ time 84 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 100 (of 180) ]
[ time 85 ] IO_DONE by JOB 1
[ time 85 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 14 (of 20) ]
[ time 86 ] IO_START by JOB 1
IO DONE
[ time 86 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 99 (of 180) ]
[ time 87 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 98 (of 180) ]
[ time 88 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 97 (of 180) ]
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 96 (of 180) ]
[ time 90 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 95 (of 180) ]
[ time 91 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 94 (of 180) ]
[ time 92 ] IO_DONE by JOB 1
[ time 92 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 13 (of 20) ]
[ time 93 ] IO_START by JOB 1
IO DONE
[ time 93 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 93 (of 180) ]
[ time 94 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 92 (of 180) ]
[ time 95 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 91 (of 180) ]
[ time 96 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 90 (of 180) ]
[ time 97 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 89 (of 180) ]
[ time 98 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 88 (of 180) ]
[ time 99 ] IO_DONE by JOB 1
[ time 99 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 12 (of 20) ]
[ time 100 ] IO_START by JOB 1
IO DONE
[ time 100 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 87 (of 180) ]
[ time 101 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 86 (of 180) ]
[ time 102 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 85 (of 180) ]
[ time 103 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 84 (of 180) ]
[ time 104 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 83 (of 180) ]
[ time 105 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 82 (of 180) ]
[ time 106 ] IO_DONE by JOB 1
[ time 106 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 11 (of 20) ]
[ time 107 ] IO_START by JOB 1
IO DONE
[ time 107 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 81 (of 180) ]
[ time 108 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 80 (of 180) ]
[ time 109 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 180) ]
[ time 110 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 180) ]
[ time 111 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 180) ]
[ time 112 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 180) ]
[ time 113 ] IO_DONE by JOB 1
[ time 113 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 10 (of 20) ]
[ time 114 ] IO_START by JOB 1
IO DONE
[ time 114 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 180) ]
[ time 115 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 180) ]
[ time 116 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 180) ]
[ time 117 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 180) ]
[ time 118 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 180) ]
[ time 119 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 180) ]
[ time 120 ] IO_DONE by JOB 1
[ time 120 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 20) ]
[ time 121 ] IO_START by JOB 1
IO DONE
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 69 (of 180) ]
[ time 122 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 68 (of 180) ]
[ time 123 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 67 (of 180) ]
[ time 124 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 66 (of 180) ]
[ time 125 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 65 (of 180) ]
[ time 126 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 64 (of 180) ]
[ time 127 ] IO_DONE by JOB 1
[ time 127 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 8 (of 20) ]
[ time 128 ] IO_START by JOB 1
IO DONE
[ time 128 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 63 (of 180) ]
[ time 129 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 62 (of 180) ]
[ time 130 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 61 (of 180) ]
[ time 131 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 60 (of 180) ]
[ time 132 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 59 (of 180) ]
[ time 133 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 58 (of 180) ]
[ time 134 ] IO_DONE by JOB 1
[ time 134 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 7 (of 20) ]
[ time 135 ] IO_START by JOB 1
IO DONE
[ time 135 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 57 (of 180) ]
[ time 136 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 56 (of 180) ]
[ time 137 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 55 (of 180) ]
[ time 138 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 54 (of 180) ]
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 53 (of 180) ]
[ time 140 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 52 (of 180) ]
[ time 141 ] IO_DONE by JOB 1
[ time 141 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 6 (of 20) ]
[ time 142 ] IO_START by JOB 1
IO DONE
[ time 142 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 51 (of 180) ]
[ time 143 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 50 (of 180) ]
[ time 144 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 180) ]
[ time 145 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 180) ]
[ time 146 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 180) ]
[ time 147 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 180) ]
[ time 148 ] IO_DONE by JOB 1
[ time 148 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 5 (of 20) ]
[ time 149 ] IO_START by JOB 1
IO DONE
[ time 149 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 180) ]
[ time 150 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 180) ]
[ time 151 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 180) ]
[ time 152 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 180) ]
[ time 153 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 180) ]
[ time 154 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 180) ]
[ time 155 ] IO_DONE by JOB 1
[ time 155 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 4 (of 20) ]
[ time 156 ] IO_START by JOB 1
IO DONE
[ time 156 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 180) ]
[ time 157 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 180) ]
[ time 158 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 180) ]
[ time 159 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 180) ]
[ time 160 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 180) ]
[ time 161 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 180) ]
[ time 162 ] IO_DONE by JOB 1
[ time 162 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 3 (of 20) ]
[ time 163 ] IO_START by JOB 1
IO DONE
[ time 163 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 180) ]
[ time 164 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 180) ]
[ time 165 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 180) ]
[ time 166 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 180) ]
[ time 167 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 180) ]
[ time 168 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 180) ]
[ time 169 ] IO_DONE by JOB 1
[ time 169 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 2 (of 20) ]
[ time 170 ] IO_START by JOB 1
IO DONE
[ time 170 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 180) ]
[ time 171 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 180) ]
[ time 172 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 180) ]
[ time 173 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 180) ]
[ time 174 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 180) ]
[ time 175 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 180) ]
[ time 176 ] IO_DONE by JOB 1
[ time 176 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 1 (of 20) ]
[ time 177 ] IO_START by JOB 1
IO DONE
[ time 177 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 180) ]
[ time 178 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 180) ]
[ time 179 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 180) ]
[ time 180 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 180) ]
[ time 181 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 180) ]
[ time 182 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 180) ]
[ time 183 ] IO_DONE by JOB 1
[ time 183 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 0 (of 20) ]
[ time 184 ] FINISHED JOB 1
[ time 184 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 180) ]
[ time 185 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 180) ]
[ time 186 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 180) ]
[ time 187 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 180) ]
[ time 188 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 180) ]
[ time 189 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 180) ]
[ time 190 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 180) ]
[ time 191 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 180) ]
[ time 192 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 180) ]
[ time 193 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 180) ]
[ time 194 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 180) ]
[ time 195 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 180) ]
[ time 196 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 180) ]
[ time 197 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 180) ]
[ time 198 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 180) ]
[ time 199 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 180) ]
[ time 200 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 200
  Job  1: startTime  50 - response   0 - turnaround 134

  Avg  1: startTime n/a - response 0.00 - turnaround 167.00
```
___
### Problems with Our Current MLFQ
![Figure 8.5: Without (Left) and With (Right) Priority Boost](/images/Figure%208.5.png)

To create starvation condition on left:

3 jobs
  1 CPU-intensive with 0:200:0
  2 interactive with 100:50:1

Queue N 3   Quanta of 10,10,10  ioTime 6  and stayAfterIO True
___
#### Input
```console
./mlfq.py --jlist=0,200,0:100,50,1:100,50,1 -n 3 -Q 10,10,10 -i 1 -S -s 0 -c
```
___
#### Output
```console
Here is the list of inputs:
OPTIONS jobs 3
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 0
OPTIONS ioTime 1
OPTIONS stayAfterIO True
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 200 - ioFreq   0
  Job  1: startTime 100 - runTime  50 - ioFreq   1
  Job  2: startTime 100 - runTime  50 - ioFreq   1


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 199 (of 200) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 198 (of 200) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 197 (of 200) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 196 (of 200) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 195 (of 200) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 194 (of 200) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 193 (of 200) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 192 (of 200) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 191 (of 200) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 190 (of 200) ]
[ time 10 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 189 (of 200) ]
[ time 11 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 188 (of 200) ]
[ time 12 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 187 (of 200) ]
[ time 13 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 186 (of 200) ]
[ time 14 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 185 (of 200) ]
[ time 15 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 184 (of 200) ]
[ time 16 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 183 (of 200) ]
[ time 17 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 182 (of 200) ]
[ time 18 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 181 (of 200) ]
[ time 19 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 180 (of 200) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 179 (of 200) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 178 (of 200) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 177 (of 200) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 176 (of 200) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 175 (of 200) ]
[ time 25 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 174 (of 200) ]
[ time 26 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 173 (of 200) ]
[ time 27 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 172 (of 200) ]
[ time 28 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 171 (of 200) ]
[ time 29 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 170 (of 200) ]
[ time 30 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 169 (of 200) ]
[ time 31 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 168 (of 200) ]
[ time 32 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 167 (of 200) ]
[ time 33 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 166 (of 200) ]
[ time 34 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 165 (of 200) ]
[ time 35 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 164 (of 200) ]
[ time 36 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 163 (of 200) ]
[ time 37 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 162 (of 200) ]
[ time 38 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 161 (of 200) ]
[ time 39 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 160 (of 200) ]
[ time 40 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 159 (of 200) ]
[ time 41 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 158 (of 200) ]
[ time 42 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 157 (of 200) ]
[ time 43 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 156 (of 200) ]
[ time 44 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 155 (of 200) ]
[ time 45 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 154 (of 200) ]
[ time 46 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 153 (of 200) ]
[ time 47 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 152 (of 200) ]
[ time 48 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 151 (of 200) ]
[ time 49 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 150 (of 200) ]
[ time 50 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 149 (of 200) ]
[ time 51 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 148 (of 200) ]
[ time 52 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 147 (of 200) ]
[ time 53 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 146 (of 200) ]
[ time 54 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 145 (of 200) ]
[ time 55 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 144 (of 200) ]
[ time 56 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 143 (of 200) ]
[ time 57 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 142 (of 200) ]
[ time 58 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 141 (of 200) ]
[ time 59 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 140 (of 200) ]
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 139 (of 200) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 138 (of 200) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 137 (of 200) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 136 (of 200) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 135 (of 200) ]
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 134 (of 200) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 133 (of 200) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 132 (of 200) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 131 (of 200) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 130 (of 200) ]
[ time 70 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 129 (of 200) ]
[ time 71 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 128 (of 200) ]
[ time 72 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 127 (of 200) ]
[ time 73 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 126 (of 200) ]
[ time 74 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 125 (of 200) ]
[ time 75 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 124 (of 200) ]
[ time 76 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 123 (of 200) ]
[ time 77 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 122 (of 200) ]
[ time 78 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 121 (of 200) ]
[ time 79 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 120 (of 200) ]
[ time 80 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 119 (of 200) ]
[ time 81 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 118 (of 200) ]
[ time 82 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 117 (of 200) ]
[ time 83 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 116 (of 200) ]
[ time 84 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 115 (of 200) ]
[ time 85 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 114 (of 200) ]
[ time 86 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 113 (of 200) ]
[ time 87 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 112 (of 200) ]
[ time 88 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 111 (of 200) ]
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 110 (of 200) ]
[ time 90 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 109 (of 200) ]
[ time 91 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 108 (of 200) ]
[ time 92 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 107 (of 200) ]
[ time 93 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 106 (of 200) ]
[ time 94 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 105 (of 200) ]
[ time 95 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 104 (of 200) ]
[ time 96 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 103 (of 200) ]
[ time 97 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 102 (of 200) ]
[ time 98 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 101 (of 200) ]
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 100 (of 200) ]
[ time 100 ] JOB BEGINS by JOB 1
[ time 100 ] JOB BEGINS by JOB 2
[ time 100 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 101 ] IO_START by JOB 1
IO DONE
[ time 101 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 49 (of 50) ]
[ time 102 ] IO_START by JOB 2
IO DONE
[ time 102 ] IO_DONE by JOB 1
[ time 102 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 48 (of 50) ]
[ time 103 ] IO_START by JOB 1
IO DONE
[ time 103 ] IO_DONE by JOB 2
[ time 103 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 48 (of 50) ]
[ time 104 ] IO_START by JOB 2
IO DONE
[ time 104 ] IO_DONE by JOB 1
[ time 104 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 47 (of 50) ]
[ time 105 ] IO_START by JOB 1
IO DONE
[ time 105 ] IO_DONE by JOB 2
[ time 105 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 47 (of 50) ]
[ time 106 ] IO_START by JOB 2
IO DONE
[ time 106 ] IO_DONE by JOB 1
[ time 106 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 46 (of 50) ]
[ time 107 ] IO_START by JOB 1
IO DONE
[ time 107 ] IO_DONE by JOB 2
[ time 107 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 46 (of 50) ]
[ time 108 ] IO_START by JOB 2
IO DONE
[ time 108 ] IO_DONE by JOB 1
[ time 108 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 45 (of 50) ]
[ time 109 ] IO_START by JOB 1
IO DONE
[ time 109 ] IO_DONE by JOB 2
[ time 109 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 45 (of 50) ]
[ time 110 ] IO_START by JOB 2
IO DONE
[ time 110 ] IO_DONE by JOB 1
[ time 110 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 111 ] IO_START by JOB 1
IO DONE
[ time 111 ] IO_DONE by JOB 2
[ time 111 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 112 ] IO_START by JOB 2
IO DONE
[ time 112 ] IO_DONE by JOB 1
[ time 112 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 43 (of 50) ]
[ time 113 ] IO_START by JOB 1
IO DONE
[ time 113 ] IO_DONE by JOB 2
[ time 113 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 43 (of 50) ]
[ time 114 ] IO_START by JOB 2
IO DONE
[ time 114 ] IO_DONE by JOB 1
[ time 114 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 42 (of 50) ]
[ time 115 ] IO_START by JOB 1
IO DONE
[ time 115 ] IO_DONE by JOB 2
[ time 115 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 42 (of 50) ]
[ time 116 ] IO_START by JOB 2
IO DONE
[ time 116 ] IO_DONE by JOB 1
[ time 116 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 41 (of 50) ]
[ time 117 ] IO_START by JOB 1
IO DONE
[ time 117 ] IO_DONE by JOB 2
[ time 117 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 41 (of 50) ]
[ time 118 ] IO_START by JOB 2
IO DONE
[ time 118 ] IO_DONE by JOB 1
[ time 118 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 40 (of 50) ]
[ time 119 ] IO_START by JOB 1
IO DONE
[ time 119 ] IO_DONE by JOB 2
[ time 119 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 40 (of 50) ]
[ time 120 ] IO_START by JOB 2
IO DONE
[ time 120 ] IO_DONE by JOB 1
[ time 120 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 121 ] IO_START by JOB 1
IO DONE
[ time 121 ] IO_DONE by JOB 2
[ time 121 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 122 ] IO_START by JOB 2
IO DONE
[ time 122 ] IO_DONE by JOB 1
[ time 122 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 38 (of 50) ]
[ time 123 ] IO_START by JOB 1
IO DONE
[ time 123 ] IO_DONE by JOB 2
[ time 123 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 38 (of 50) ]
[ time 124 ] IO_START by JOB 2
IO DONE
[ time 124 ] IO_DONE by JOB 1
[ time 124 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 37 (of 50) ]
[ time 125 ] IO_START by JOB 1
IO DONE
[ time 125 ] IO_DONE by JOB 2
[ time 125 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 37 (of 50) ]
[ time 126 ] IO_START by JOB 2
IO DONE
[ time 126 ] IO_DONE by JOB 1
[ time 126 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 36 (of 50) ]
[ time 127 ] IO_START by JOB 1
IO DONE
[ time 127 ] IO_DONE by JOB 2
[ time 127 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 36 (of 50) ]
[ time 128 ] IO_START by JOB 2
IO DONE
[ time 128 ] IO_DONE by JOB 1
[ time 128 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 35 (of 50) ]
[ time 129 ] IO_START by JOB 1
IO DONE
[ time 129 ] IO_DONE by JOB 2
[ time 129 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 35 (of 50) ]
[ time 130 ] IO_START by JOB 2
IO DONE
[ time 130 ] IO_DONE by JOB 1
[ time 130 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 131 ] IO_START by JOB 1
IO DONE
[ time 131 ] IO_DONE by JOB 2
[ time 131 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 132 ] IO_START by JOB 2
IO DONE
[ time 132 ] IO_DONE by JOB 1
[ time 132 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 33 (of 50) ]
[ time 133 ] IO_START by JOB 1
IO DONE
[ time 133 ] IO_DONE by JOB 2
[ time 133 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 33 (of 50) ]
[ time 134 ] IO_START by JOB 2
IO DONE
[ time 134 ] IO_DONE by JOB 1
[ time 134 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 32 (of 50) ]
[ time 135 ] IO_START by JOB 1
IO DONE
[ time 135 ] IO_DONE by JOB 2
[ time 135 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 32 (of 50) ]
[ time 136 ] IO_START by JOB 2
IO DONE
[ time 136 ] IO_DONE by JOB 1
[ time 136 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 31 (of 50) ]
[ time 137 ] IO_START by JOB 1
IO DONE
[ time 137 ] IO_DONE by JOB 2
[ time 137 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 31 (of 50) ]
[ time 138 ] IO_START by JOB 2
IO DONE
[ time 138 ] IO_DONE by JOB 1
[ time 138 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 30 (of 50) ]
[ time 139 ] IO_START by JOB 1
IO DONE
[ time 139 ] IO_DONE by JOB 2
[ time 139 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 30 (of 50) ]
[ time 140 ] IO_START by JOB 2
IO DONE
[ time 140 ] IO_DONE by JOB 1
[ time 140 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 141 ] IO_START by JOB 1
IO DONE
[ time 141 ] IO_DONE by JOB 2
[ time 141 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 142 ] IO_START by JOB 2
IO DONE
[ time 142 ] IO_DONE by JOB 1
[ time 142 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 28 (of 50) ]
[ time 143 ] IO_START by JOB 1
IO DONE
[ time 143 ] IO_DONE by JOB 2
[ time 143 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 28 (of 50) ]
[ time 144 ] IO_START by JOB 2
IO DONE
[ time 144 ] IO_DONE by JOB 1
[ time 144 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 27 (of 50) ]
[ time 145 ] IO_START by JOB 1
IO DONE
[ time 145 ] IO_DONE by JOB 2
[ time 145 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 27 (of 50) ]
[ time 146 ] IO_START by JOB 2
IO DONE
[ time 146 ] IO_DONE by JOB 1
[ time 146 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 26 (of 50) ]
[ time 147 ] IO_START by JOB 1
IO DONE
[ time 147 ] IO_DONE by JOB 2
[ time 147 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 26 (of 50) ]
[ time 148 ] IO_START by JOB 2
IO DONE
[ time 148 ] IO_DONE by JOB 1
[ time 148 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 25 (of 50) ]
[ time 149 ] IO_START by JOB 1
IO DONE
[ time 149 ] IO_DONE by JOB 2
[ time 149 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 25 (of 50) ]
[ time 150 ] IO_START by JOB 2
IO DONE
[ time 150 ] IO_DONE by JOB 1
[ time 150 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 151 ] IO_START by JOB 1
IO DONE
[ time 151 ] IO_DONE by JOB 2
[ time 151 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 152 ] IO_START by JOB 2
IO DONE
[ time 152 ] IO_DONE by JOB 1
[ time 152 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 23 (of 50) ]
[ time 153 ] IO_START by JOB 1
IO DONE
[ time 153 ] IO_DONE by JOB 2
[ time 153 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 23 (of 50) ]
[ time 154 ] IO_START by JOB 2
IO DONE
[ time 154 ] IO_DONE by JOB 1
[ time 154 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 22 (of 50) ]
[ time 155 ] IO_START by JOB 1
IO DONE
[ time 155 ] IO_DONE by JOB 2
[ time 155 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 22 (of 50) ]
[ time 156 ] IO_START by JOB 2
IO DONE
[ time 156 ] IO_DONE by JOB 1
[ time 156 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 21 (of 50) ]
[ time 157 ] IO_START by JOB 1
IO DONE
[ time 157 ] IO_DONE by JOB 2
[ time 157 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 21 (of 50) ]
[ time 158 ] IO_START by JOB 2
IO DONE
[ time 158 ] IO_DONE by JOB 1
[ time 158 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 20 (of 50) ]
[ time 159 ] IO_START by JOB 1
IO DONE
[ time 159 ] IO_DONE by JOB 2
[ time 159 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 20 (of 50) ]
[ time 160 ] IO_START by JOB 2
IO DONE
[ time 160 ] IO_DONE by JOB 1
[ time 160 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 161 ] IO_START by JOB 1
IO DONE
[ time 161 ] IO_DONE by JOB 2
[ time 161 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 162 ] IO_START by JOB 2
IO DONE
[ time 162 ] IO_DONE by JOB 1
[ time 162 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 18 (of 50) ]
[ time 163 ] IO_START by JOB 1
IO DONE
[ time 163 ] IO_DONE by JOB 2
[ time 163 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 18 (of 50) ]
[ time 164 ] IO_START by JOB 2
IO DONE
[ time 164 ] IO_DONE by JOB 1
[ time 164 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 17 (of 50) ]
[ time 165 ] IO_START by JOB 1
IO DONE
[ time 165 ] IO_DONE by JOB 2
[ time 165 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 17 (of 50) ]
[ time 166 ] IO_START by JOB 2
IO DONE
[ time 166 ] IO_DONE by JOB 1
[ time 166 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 16 (of 50) ]
[ time 167 ] IO_START by JOB 1
IO DONE
[ time 167 ] IO_DONE by JOB 2
[ time 167 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 16 (of 50) ]
[ time 168 ] IO_START by JOB 2
IO DONE
[ time 168 ] IO_DONE by JOB 1
[ time 168 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 15 (of 50) ]
[ time 169 ] IO_START by JOB 1
IO DONE
[ time 169 ] IO_DONE by JOB 2
[ time 169 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 15 (of 50) ]
[ time 170 ] IO_START by JOB 2
IO DONE
[ time 170 ] IO_DONE by JOB 1
[ time 170 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 171 ] IO_START by JOB 1
IO DONE
[ time 171 ] IO_DONE by JOB 2
[ time 171 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 172 ] IO_START by JOB 2
IO DONE
[ time 172 ] IO_DONE by JOB 1
[ time 172 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 13 (of 50) ]
[ time 173 ] IO_START by JOB 1
IO DONE
[ time 173 ] IO_DONE by JOB 2
[ time 173 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 13 (of 50) ]
[ time 174 ] IO_START by JOB 2
IO DONE
[ time 174 ] IO_DONE by JOB 1
[ time 174 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 12 (of 50) ]
[ time 175 ] IO_START by JOB 1
IO DONE
[ time 175 ] IO_DONE by JOB 2
[ time 175 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 12 (of 50) ]
[ time 176 ] IO_START by JOB 2
IO DONE
[ time 176 ] IO_DONE by JOB 1
[ time 176 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 11 (of 50) ]
[ time 177 ] IO_START by JOB 1
IO DONE
[ time 177 ] IO_DONE by JOB 2
[ time 177 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 11 (of 50) ]
[ time 178 ] IO_START by JOB 2
IO DONE
[ time 178 ] IO_DONE by JOB 1
[ time 178 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 10 (of 50) ]
[ time 179 ] IO_START by JOB 1
IO DONE
[ time 179 ] IO_DONE by JOB 2
[ time 179 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 10 (of 50) ]
[ time 180 ] IO_START by JOB 2
IO DONE
[ time 180 ] IO_DONE by JOB 1
[ time 180 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 181 ] IO_START by JOB 1
IO DONE
[ time 181 ] IO_DONE by JOB 2
[ time 181 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 182 ] IO_START by JOB 2
IO DONE
[ time 182 ] IO_DONE by JOB 1
[ time 182 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 8 (of 50) ]
[ time 183 ] IO_START by JOB 1
IO DONE
[ time 183 ] IO_DONE by JOB 2
[ time 183 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 8 (of 50) ]
[ time 184 ] IO_START by JOB 2
IO DONE
[ time 184 ] IO_DONE by JOB 1
[ time 184 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 7 (of 50) ]
[ time 185 ] IO_START by JOB 1
IO DONE
[ time 185 ] IO_DONE by JOB 2
[ time 185 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 7 (of 50) ]
[ time 186 ] IO_START by JOB 2
IO DONE
[ time 186 ] IO_DONE by JOB 1
[ time 186 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 6 (of 50) ]
[ time 187 ] IO_START by JOB 1
IO DONE
[ time 187 ] IO_DONE by JOB 2
[ time 187 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 6 (of 50) ]
[ time 188 ] IO_START by JOB 2
IO DONE
[ time 188 ] IO_DONE by JOB 1
[ time 188 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 5 (of 50) ]
[ time 189 ] IO_START by JOB 1
IO DONE
[ time 189 ] IO_DONE by JOB 2
[ time 189 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 5 (of 50) ]
[ time 190 ] IO_START by JOB 2
IO DONE
[ time 190 ] IO_DONE by JOB 1
[ time 190 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 191 ] IO_START by JOB 1
IO DONE
[ time 191 ] IO_DONE by JOB 2
[ time 191 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 192 ] IO_START by JOB 2
IO DONE
[ time 192 ] IO_DONE by JOB 1
[ time 192 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 3 (of 50) ]
[ time 193 ] IO_START by JOB 1
IO DONE
[ time 193 ] IO_DONE by JOB 2
[ time 193 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 3 (of 50) ]
[ time 194 ] IO_START by JOB 2
IO DONE
[ time 194 ] IO_DONE by JOB 1
[ time 194 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 2 (of 50) ]
[ time 195 ] IO_START by JOB 1
IO DONE
[ time 195 ] IO_DONE by JOB 2
[ time 195 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 2 (of 50) ]
[ time 196 ] IO_START by JOB 2
IO DONE
[ time 196 ] IO_DONE by JOB 1
[ time 196 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 1 (of 50) ]
[ time 197 ] IO_START by JOB 1
IO DONE
[ time 197 ] IO_DONE by JOB 2
[ time 197 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 1 (of 50) ]
[ time 198 ] IO_START by JOB 2
IO DONE
[ time 198 ] IO_DONE by JOB 1
[ time 198 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 0 (of 50) ]
[ time 199 ] FINISHED JOB 1
[ time 199 ] IO_DONE by JOB 2
[ time 199 ] Run JOB 2 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 0 (of 50) ]
[ time 200 ] FINISHED JOB 2
[ time 200 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 99 (of 200) ]
[ time 201 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 98 (of 200) ]
[ time 202 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 97 (of 200) ]
[ time 203 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 96 (of 200) ]
[ time 204 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 95 (of 200) ]
[ time 205 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 94 (of 200) ]
[ time 206 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 93 (of 200) ]
[ time 207 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 92 (of 200) ]
[ time 208 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 91 (of 200) ]
[ time 209 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 90 (of 200) ]
[ time 210 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 89 (of 200) ]
[ time 211 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 88 (of 200) ]
[ time 212 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 87 (of 200) ]
[ time 213 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 86 (of 200) ]
[ time 214 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 85 (of 200) ]
[ time 215 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 84 (of 200) ]
[ time 216 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 83 (of 200) ]
[ time 217 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 82 (of 200) ]
[ time 218 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 81 (of 200) ]
[ time 219 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 80 (of 200) ]
[ time 220 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 200) ]
[ time 221 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 200) ]
[ time 222 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 200) ]
[ time 223 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 200) ]
[ time 224 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 200) ]
[ time 225 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 200) ]
[ time 226 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 200) ]
[ time 227 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 200) ]
[ time 228 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 200) ]
[ time 229 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 200) ]
[ time 230 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 69 (of 200) ]
[ time 231 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 68 (of 200) ]
[ time 232 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 67 (of 200) ]
[ time 233 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 66 (of 200) ]
[ time 234 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 65 (of 200) ]
[ time 235 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 64 (of 200) ]
[ time 236 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 63 (of 200) ]
[ time 237 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 62 (of 200) ]
[ time 238 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 61 (of 200) ]
[ time 239 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 60 (of 200) ]
[ time 240 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 59 (of 200) ]
[ time 241 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 58 (of 200) ]
[ time 242 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 57 (of 200) ]
[ time 243 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 56 (of 200) ]
[ time 244 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 55 (of 200) ]
[ time 245 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 54 (of 200) ]
[ time 246 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 53 (of 200) ]
[ time 247 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 52 (of 200) ]
[ time 248 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 51 (of 200) ]
[ time 249 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 50 (of 200) ]
[ time 250 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 200) ]
[ time 251 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 200) ]
[ time 252 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 200) ]
[ time 253 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 200) ]
[ time 254 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 200) ]
[ time 255 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 200) ]
[ time 256 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 200) ]
[ time 257 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 200) ]
[ time 258 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 200) ]
[ time 259 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 200) ]
[ time 260 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 200) ]
[ time 261 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 200) ]
[ time 262 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 200) ]
[ time 263 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 200) ]
[ time 264 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 200) ]
[ time 265 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 200) ]
[ time 266 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 200) ]
[ time 267 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 200) ]
[ time 268 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 200) ]
[ time 269 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 200) ]
[ time 270 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 200) ]
[ time 271 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 200) ]
[ time 272 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 200) ]
[ time 273 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 200) ]
[ time 274 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 200) ]
[ time 275 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 200) ]
[ time 276 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 200) ]
[ time 277 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 200) ]
[ time 278 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 200) ]
[ time 279 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 200) ]
[ time 280 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 200) ]
[ time 281 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 200) ]
[ time 282 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 200) ]
[ time 283 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 200) ]
[ time 284 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 200) ]
[ time 285 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 200) ]
[ time 286 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 200) ]
[ time 287 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 200) ]
[ time 288 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 200) ]
[ time 289 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 200) ]
[ time 290 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 200) ]
[ time 291 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 200) ]
[ time 292 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 200) ]
[ time 293 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 200) ]
[ time 294 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 200) ]
[ time 295 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 200) ]
[ time 296 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 200) ]
[ time 297 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 200) ]
[ time 298 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 200) ]
[ time 299 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 200) ]
[ time 300 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 300
  Job  1: startTime 100 - response   0 - turnaround  99
  Job  2: startTime 100 - response   1 - turnaround 100

  Avg  2: startTime n/a - response 0.33 - turnaround 166.33
```
### Attempt #2: Priority Boost
Same as last example, but with priority boost of 50 ms.  This makes turnaround time greater, but eliminates starvation of the CPU-intensive process.
___
#### Input
```console
./mlfq.py --jlist=0,200,0:100,50,1:100,50,1 -n 3 -Q 10,10,10 -i 1 -S -B 50 -s 0 -c
```
___
#### Output
```console
Here is the list of inputs:
OPTIONS jobs 3
OPTIONS queues 3
OPTIONS allotments for queue  2 is   1
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 50
OPTIONS ioTime 1
OPTIONS stayAfterIO True
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 200 - ioFreq   0
  Job  1: startTime 100 - runTime  50 - ioFreq   1
  Job  2: startTime 100 - runTime  50 - ioFreq   1


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 199 (of 200) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 198 (of 200) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 197 (of 200) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 196 (of 200) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 195 (of 200) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 194 (of 200) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 193 (of 200) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 192 (of 200) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 191 (of 200) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 190 (of 200) ]
[ time 10 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 189 (of 200) ]
[ time 11 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 188 (of 200) ]
[ time 12 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 187 (of 200) ]
[ time 13 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 186 (of 200) ]
[ time 14 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 185 (of 200) ]
[ time 15 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 184 (of 200) ]
[ time 16 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 183 (of 200) ]
[ time 17 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 182 (of 200) ]
[ time 18 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 181 (of 200) ]
[ time 19 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 180 (of 200) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 179 (of 200) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 178 (of 200) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 177 (of 200) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 176 (of 200) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 175 (of 200) ]
[ time 25 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 174 (of 200) ]
[ time 26 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 173 (of 200) ]
[ time 27 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 172 (of 200) ]
[ time 28 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 171 (of 200) ]
[ time 29 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 170 (of 200) ]
[ time 30 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 169 (of 200) ]
[ time 31 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 168 (of 200) ]
[ time 32 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 167 (of 200) ]
[ time 33 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 166 (of 200) ]
[ time 34 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 165 (of 200) ]
[ time 35 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 164 (of 200) ]
[ time 36 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 163 (of 200) ]
[ time 37 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 162 (of 200) ]
[ time 38 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 161 (of 200) ]
[ time 39 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 160 (of 200) ]
[ time 40 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 159 (of 200) ]
[ time 41 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 158 (of 200) ]
[ time 42 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 157 (of 200) ]
[ time 43 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 156 (of 200) ]
[ time 44 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 155 (of 200) ]
[ time 45 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 154 (of 200) ]
[ time 46 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 153 (of 200) ]
[ time 47 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 152 (of 200) ]
[ time 48 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 151 (of 200) ]
[ time 49 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 150 (of 200) ]
[ time 50 ] BOOST ( every 50 )
[ time 50 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 149 (of 200) ]
[ time 51 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 148 (of 200) ]
[ time 52 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 147 (of 200) ]
[ time 53 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 146 (of 200) ]
[ time 54 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 145 (of 200) ]
[ time 55 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 144 (of 200) ]
[ time 56 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 143 (of 200) ]
[ time 57 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 142 (of 200) ]
[ time 58 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 141 (of 200) ]
[ time 59 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 140 (of 200) ]
[ time 60 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 139 (of 200) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 138 (of 200) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 137 (of 200) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 136 (of 200) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 135 (of 200) ]
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 134 (of 200) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 133 (of 200) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 132 (of 200) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 131 (of 200) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 130 (of 200) ]
[ time 70 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 129 (of 200) ]
[ time 71 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 128 (of 200) ]
[ time 72 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 127 (of 200) ]
[ time 73 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 126 (of 200) ]
[ time 74 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 125 (of 200) ]
[ time 75 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 124 (of 200) ]
[ time 76 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 123 (of 200) ]
[ time 77 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 122 (of 200) ]
[ time 78 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 121 (of 200) ]
[ time 79 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 120 (of 200) ]
[ time 80 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 119 (of 200) ]
[ time 81 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 118 (of 200) ]
[ time 82 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 117 (of 200) ]
[ time 83 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 116 (of 200) ]
[ time 84 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 115 (of 200) ]
[ time 85 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 114 (of 200) ]
[ time 86 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 113 (of 200) ]
[ time 87 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 112 (of 200) ]
[ time 88 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 111 (of 200) ]
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 110 (of 200) ]
[ time 90 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 109 (of 200) ]
[ time 91 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 108 (of 200) ]
[ time 92 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 107 (of 200) ]
[ time 93 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 106 (of 200) ]
[ time 94 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 105 (of 200) ]
[ time 95 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 104 (of 200) ]
[ time 96 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 103 (of 200) ]
[ time 97 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 102 (of 200) ]
[ time 98 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 101 (of 200) ]
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 100 (of 200) ]
[ time 100 ] BOOST ( every 50 )
[ time 100 ] JOB BEGINS by JOB 1
[ time 100 ] JOB BEGINS by JOB 2
[ time 100 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 99 (of 200) ]
[ time 101 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 49 (of 50) ]
[ time 102 ] IO_START by JOB 1
IO DONE
[ time 102 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 49 (of 50) ]
[ time 103 ] IO_START by JOB 2
IO DONE
[ time 103 ] IO_DONE by JOB 1
[ time 103 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 98 (of 200) ]
[ time 104 ] IO_DONE by JOB 2
[ time 104 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 97 (of 200) ]
[ time 105 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 96 (of 200) ]
[ time 106 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 95 (of 200) ]
[ time 107 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 94 (of 200) ]
[ time 108 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 93 (of 200) ]
[ time 109 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 92 (of 200) ]
[ time 110 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 91 (of 200) ]
[ time 111 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 90 (of 200) ]
[ time 112 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 89 (of 200) ]
[ time 113 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 48 (of 50) ]
[ time 114 ] IO_START by JOB 1
IO DONE
[ time 114 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 48 (of 50) ]
[ time 115 ] IO_START by JOB 2
IO DONE
[ time 115 ] IO_DONE by JOB 1
[ time 115 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 47 (of 50) ]
[ time 116 ] IO_START by JOB 1
IO DONE
[ time 116 ] IO_DONE by JOB 2
[ time 116 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 47 (of 50) ]
[ time 117 ] IO_START by JOB 2
IO DONE
[ time 117 ] IO_DONE by JOB 1
[ time 117 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 46 (of 50) ]
[ time 118 ] IO_START by JOB 1
IO DONE
[ time 118 ] IO_DONE by JOB 2
[ time 118 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 46 (of 50) ]
[ time 119 ] IO_START by JOB 2
IO DONE
[ time 119 ] IO_DONE by JOB 1
[ time 119 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 45 (of 50) ]
[ time 120 ] IO_START by JOB 1
IO DONE
[ time 120 ] IO_DONE by JOB 2
[ time 120 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 45 (of 50) ]
[ time 121 ] IO_START by JOB 2
IO DONE
[ time 121 ] IO_DONE by JOB 1
[ time 121 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 122 ] IO_START by JOB 1
IO DONE
[ time 122 ] IO_DONE by JOB 2
[ time 122 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 44 (of 50) ]
[ time 123 ] IO_START by JOB 2
IO DONE
[ time 123 ] IO_DONE by JOB 1
[ time 123 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 43 (of 50) ]
[ time 124 ] IO_START by JOB 1
IO DONE
[ time 124 ] IO_DONE by JOB 2
[ time 124 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 43 (of 50) ]
[ time 125 ] IO_START by JOB 2
IO DONE
[ time 125 ] IO_DONE by JOB 1
[ time 125 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 42 (of 50) ]
[ time 126 ] IO_START by JOB 1
IO DONE
[ time 126 ] IO_DONE by JOB 2
[ time 126 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 42 (of 50) ]
[ time 127 ] IO_START by JOB 2
IO DONE
[ time 127 ] IO_DONE by JOB 1
[ time 127 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 41 (of 50) ]
[ time 128 ] IO_START by JOB 1
IO DONE
[ time 128 ] IO_DONE by JOB 2
[ time 128 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 41 (of 50) ]
[ time 129 ] IO_START by JOB 2
IO DONE
[ time 129 ] IO_DONE by JOB 1
[ time 129 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 40 (of 50) ]
[ time 130 ] IO_START by JOB 1
IO DONE
[ time 130 ] IO_DONE by JOB 2
[ time 130 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 40 (of 50) ]
[ time 131 ] IO_START by JOB 2
IO DONE
[ time 131 ] IO_DONE by JOB 1
[ time 131 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 132 ] IO_START by JOB 1
IO DONE
[ time 132 ] IO_DONE by JOB 2
[ time 132 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 39 (of 50) ]
[ time 133 ] IO_START by JOB 2
IO DONE
[ time 133 ] IO_DONE by JOB 1
[ time 133 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 38 (of 50) ]
[ time 134 ] IO_START by JOB 1
IO DONE
[ time 134 ] IO_DONE by JOB 2
[ time 134 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 38 (of 50) ]
[ time 135 ] IO_START by JOB 2
IO DONE
[ time 135 ] IO_DONE by JOB 1
[ time 135 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 37 (of 50) ]
[ time 136 ] IO_START by JOB 1
IO DONE
[ time 136 ] IO_DONE by JOB 2
[ time 136 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 37 (of 50) ]
[ time 137 ] IO_START by JOB 2
IO DONE
[ time 137 ] IO_DONE by JOB 1
[ time 137 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 36 (of 50) ]
[ time 138 ] IO_START by JOB 1
IO DONE
[ time 138 ] IO_DONE by JOB 2
[ time 138 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 36 (of 50) ]
[ time 139 ] IO_START by JOB 2
IO DONE
[ time 139 ] IO_DONE by JOB 1
[ time 139 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 35 (of 50) ]
[ time 140 ] IO_START by JOB 1
IO DONE
[ time 140 ] IO_DONE by JOB 2
[ time 140 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 35 (of 50) ]
[ time 141 ] IO_START by JOB 2
IO DONE
[ time 141 ] IO_DONE by JOB 1
[ time 141 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 142 ] IO_START by JOB 1
IO DONE
[ time 142 ] IO_DONE by JOB 2
[ time 142 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 34 (of 50) ]
[ time 143 ] IO_START by JOB 2
IO DONE
[ time 143 ] IO_DONE by JOB 1
[ time 143 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 33 (of 50) ]
[ time 144 ] IO_START by JOB 1
IO DONE
[ time 144 ] IO_DONE by JOB 2
[ time 144 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 33 (of 50) ]
[ time 145 ] IO_START by JOB 2
IO DONE
[ time 145 ] IO_DONE by JOB 1
[ time 145 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 32 (of 50) ]
[ time 146 ] IO_START by JOB 1
IO DONE
[ time 146 ] IO_DONE by JOB 2
[ time 146 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 32 (of 50) ]
[ time 147 ] IO_START by JOB 2
IO DONE
[ time 147 ] IO_DONE by JOB 1
[ time 147 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 31 (of 50) ]
[ time 148 ] IO_START by JOB 1
IO DONE
[ time 148 ] IO_DONE by JOB 2
[ time 148 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 31 (of 50) ]
[ time 149 ] IO_START by JOB 2
IO DONE
[ time 149 ] IO_DONE by JOB 1
[ time 149 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 30 (of 50) ]
[ time 150 ] IO_START by JOB 1
IO DONE
[ time 150 ] BOOST ( every 50 )
[ time 150 ] IO_DONE by JOB 2
[ time 150 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 88 (of 200) ]
[ time 151 ] IO_DONE by JOB 1
[ time 151 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 30 (of 50) ]
[ time 152 ] IO_START by JOB 2
IO DONE
[ time 152 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 29 (of 50) ]
[ time 153 ] IO_START by JOB 1
IO DONE
[ time 153 ] IO_DONE by JOB 2
[ time 153 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 87 (of 200) ]
[ time 154 ] IO_DONE by JOB 1
[ time 154 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 86 (of 200) ]
[ time 155 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 85 (of 200) ]
[ time 156 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 84 (of 200) ]
[ time 157 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 83 (of 200) ]
[ time 158 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 82 (of 200) ]
[ time 159 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 81 (of 200) ]
[ time 160 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 80 (of 200) ]
[ time 161 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 79 (of 200) ]
[ time 162 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 78 (of 200) ]
[ time 163 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 29 (of 50) ]
[ time 164 ] IO_START by JOB 2
IO DONE
[ time 164 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 28 (of 50) ]
[ time 165 ] IO_START by JOB 1
IO DONE
[ time 165 ] IO_DONE by JOB 2
[ time 165 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 28 (of 50) ]
[ time 166 ] IO_START by JOB 2
IO DONE
[ time 166 ] IO_DONE by JOB 1
[ time 166 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 27 (of 50) ]
[ time 167 ] IO_START by JOB 1
IO DONE
[ time 167 ] IO_DONE by JOB 2
[ time 167 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 27 (of 50) ]
[ time 168 ] IO_START by JOB 2
IO DONE
[ time 168 ] IO_DONE by JOB 1
[ time 168 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 26 (of 50) ]
[ time 169 ] IO_START by JOB 1
IO DONE
[ time 169 ] IO_DONE by JOB 2
[ time 169 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 26 (of 50) ]
[ time 170 ] IO_START by JOB 2
IO DONE
[ time 170 ] IO_DONE by JOB 1
[ time 170 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 25 (of 50) ]
[ time 171 ] IO_START by JOB 1
IO DONE
[ time 171 ] IO_DONE by JOB 2
[ time 171 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 25 (of 50) ]
[ time 172 ] IO_START by JOB 2
IO DONE
[ time 172 ] IO_DONE by JOB 1
[ time 172 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 173 ] IO_START by JOB 1
IO DONE
[ time 173 ] IO_DONE by JOB 2
[ time 173 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 24 (of 50) ]
[ time 174 ] IO_START by JOB 2
IO DONE
[ time 174 ] IO_DONE by JOB 1
[ time 174 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 23 (of 50) ]
[ time 175 ] IO_START by JOB 1
IO DONE
[ time 175 ] IO_DONE by JOB 2
[ time 175 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 23 (of 50) ]
[ time 176 ] IO_START by JOB 2
IO DONE
[ time 176 ] IO_DONE by JOB 1
[ time 176 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 22 (of 50) ]
[ time 177 ] IO_START by JOB 1
IO DONE
[ time 177 ] IO_DONE by JOB 2
[ time 177 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 22 (of 50) ]
[ time 178 ] IO_START by JOB 2
IO DONE
[ time 178 ] IO_DONE by JOB 1
[ time 178 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 21 (of 50) ]
[ time 179 ] IO_START by JOB 1
IO DONE
[ time 179 ] IO_DONE by JOB 2
[ time 179 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 21 (of 50) ]
[ time 180 ] IO_START by JOB 2
IO DONE
[ time 180 ] IO_DONE by JOB 1
[ time 180 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 20 (of 50) ]
[ time 181 ] IO_START by JOB 1
IO DONE
[ time 181 ] IO_DONE by JOB 2
[ time 181 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 20 (of 50) ]
[ time 182 ] IO_START by JOB 2
IO DONE
[ time 182 ] IO_DONE by JOB 1
[ time 182 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 183 ] IO_START by JOB 1
IO DONE
[ time 183 ] IO_DONE by JOB 2
[ time 183 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 19 (of 50) ]
[ time 184 ] IO_START by JOB 2
IO DONE
[ time 184 ] IO_DONE by JOB 1
[ time 184 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 18 (of 50) ]
[ time 185 ] IO_START by JOB 1
IO DONE
[ time 185 ] IO_DONE by JOB 2
[ time 185 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 18 (of 50) ]
[ time 186 ] IO_START by JOB 2
IO DONE
[ time 186 ] IO_DONE by JOB 1
[ time 186 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 17 (of 50) ]
[ time 187 ] IO_START by JOB 1
IO DONE
[ time 187 ] IO_DONE by JOB 2
[ time 187 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 17 (of 50) ]
[ time 188 ] IO_START by JOB 2
IO DONE
[ time 188 ] IO_DONE by JOB 1
[ time 188 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 16 (of 50) ]
[ time 189 ] IO_START by JOB 1
IO DONE
[ time 189 ] IO_DONE by JOB 2
[ time 189 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 16 (of 50) ]
[ time 190 ] IO_START by JOB 2
IO DONE
[ time 190 ] IO_DONE by JOB 1
[ time 190 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 15 (of 50) ]
[ time 191 ] IO_START by JOB 1
IO DONE
[ time 191 ] IO_DONE by JOB 2
[ time 191 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 15 (of 50) ]
[ time 192 ] IO_START by JOB 2
IO DONE
[ time 192 ] IO_DONE by JOB 1
[ time 192 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 193 ] IO_START by JOB 1
IO DONE
[ time 193 ] IO_DONE by JOB 2
[ time 193 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 14 (of 50) ]
[ time 194 ] IO_START by JOB 2
IO DONE
[ time 194 ] IO_DONE by JOB 1
[ time 194 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 13 (of 50) ]
[ time 195 ] IO_START by JOB 1
IO DONE
[ time 195 ] IO_DONE by JOB 2
[ time 195 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 13 (of 50) ]
[ time 196 ] IO_START by JOB 2
IO DONE
[ time 196 ] IO_DONE by JOB 1
[ time 196 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 12 (of 50) ]
[ time 197 ] IO_START by JOB 1
IO DONE
[ time 197 ] IO_DONE by JOB 2
[ time 197 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 12 (of 50) ]
[ time 198 ] IO_START by JOB 2
IO DONE
[ time 198 ] IO_DONE by JOB 1
[ time 198 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 11 (of 50) ]
[ time 199 ] IO_START by JOB 1
IO DONE
[ time 199 ] IO_DONE by JOB 2
[ time 199 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 11 (of 50) ]
[ time 200 ] IO_START by JOB 2
IO DONE
[ time 200 ] BOOST ( every 50 )
[ time 200 ] IO_DONE by JOB 1
[ time 200 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 77 (of 200) ]
[ time 201 ] IO_DONE by JOB 2
[ time 201 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 10 (of 50) ]
[ time 202 ] IO_START by JOB 1
IO DONE
[ time 202 ] Run JOB 2 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 10 (of 50) ]
[ time 203 ] IO_START by JOB 2
IO DONE
[ time 203 ] IO_DONE by JOB 1
[ time 203 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 76 (of 200) ]
[ time 204 ] IO_DONE by JOB 2
[ time 204 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 75 (of 200) ]
[ time 205 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 74 (of 200) ]
[ time 206 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 73 (of 200) ]
[ time 207 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 72 (of 200) ]
[ time 208 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 71 (of 200) ]
[ time 209 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 70 (of 200) ]
[ time 210 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 69 (of 200) ]
[ time 211 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 68 (of 200) ]
[ time 212 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 67 (of 200) ]
[ time 213 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 214 ] IO_START by JOB 1
IO DONE
[ time 214 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 9 (of 50) ]
[ time 215 ] IO_START by JOB 2
IO DONE
[ time 215 ] IO_DONE by JOB 1
[ time 215 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 8 (of 50) ]
[ time 216 ] IO_START by JOB 1
IO DONE
[ time 216 ] IO_DONE by JOB 2
[ time 216 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 8 (of 50) ]
[ time 217 ] IO_START by JOB 2
IO DONE
[ time 217 ] IO_DONE by JOB 1
[ time 217 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 7 (of 50) ]
[ time 218 ] IO_START by JOB 1
IO DONE
[ time 218 ] IO_DONE by JOB 2
[ time 218 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 7 (of 50) ]
[ time 219 ] IO_START by JOB 2
IO DONE
[ time 219 ] IO_DONE by JOB 1
[ time 219 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 6 (of 50) ]
[ time 220 ] IO_START by JOB 1
IO DONE
[ time 220 ] IO_DONE by JOB 2
[ time 220 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 6 (of 50) ]
[ time 221 ] IO_START by JOB 2
IO DONE
[ time 221 ] IO_DONE by JOB 1
[ time 221 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 5 (of 50) ]
[ time 222 ] IO_START by JOB 1
IO DONE
[ time 222 ] IO_DONE by JOB 2
[ time 222 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 5 (of 50) ]
[ time 223 ] IO_START by JOB 2
IO DONE
[ time 223 ] IO_DONE by JOB 1
[ time 223 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 224 ] IO_START by JOB 1
IO DONE
[ time 224 ] IO_DONE by JOB 2
[ time 224 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 4 (of 50) ]
[ time 225 ] IO_START by JOB 2
IO DONE
[ time 225 ] IO_DONE by JOB 1
[ time 225 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 3 (of 50) ]
[ time 226 ] IO_START by JOB 1
IO DONE
[ time 226 ] IO_DONE by JOB 2
[ time 226 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 3 (of 50) ]
[ time 227 ] IO_START by JOB 2
IO DONE
[ time 227 ] IO_DONE by JOB 1
[ time 227 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 2 (of 50) ]
[ time 228 ] IO_START by JOB 1
IO DONE
[ time 228 ] IO_DONE by JOB 2
[ time 228 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 2 (of 50) ]
[ time 229 ] IO_START by JOB 2
IO DONE
[ time 229 ] IO_DONE by JOB 1
[ time 229 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 1 (of 50) ]
[ time 230 ] IO_START by JOB 1
IO DONE
[ time 230 ] IO_DONE by JOB 2
[ time 230 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 1 (of 50) ]
[ time 231 ] IO_START by JOB 2
IO DONE
[ time 231 ] IO_DONE by JOB 1
[ time 231 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 0 (of 50) ]
[ time 232 ] FINISHED JOB 1
[ time 232 ] IO_DONE by JOB 2
[ time 232 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 0 (of 50) ]
[ time 233 ] FINISHED JOB 2
[ time 233 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 66 (of 200) ]
[ time 234 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 65 (of 200) ]
[ time 235 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 64 (of 200) ]
[ time 236 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 63 (of 200) ]
[ time 237 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 62 (of 200) ]
[ time 238 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 61 (of 200) ]
[ time 239 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 60 (of 200) ]
[ time 240 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 59 (of 200) ]
[ time 241 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 58 (of 200) ]
[ time 242 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 57 (of 200) ]
[ time 243 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 56 (of 200) ]
[ time 244 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 55 (of 200) ]
[ time 245 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 54 (of 200) ]
[ time 246 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 53 (of 200) ]
[ time 247 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 52 (of 200) ]
[ time 248 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 51 (of 200) ]
[ time 249 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 50 (of 200) ]
[ time 250 ] BOOST ( every 50 )
[ time 250 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 49 (of 200) ]
[ time 251 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 48 (of 200) ]
[ time 252 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 47 (of 200) ]
[ time 253 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 46 (of 200) ]
[ time 254 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 45 (of 200) ]
[ time 255 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 44 (of 200) ]
[ time 256 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 43 (of 200) ]
[ time 257 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 42 (of 200) ]
[ time 258 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 41 (of 200) ]
[ time 259 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 40 (of 200) ]
[ time 260 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 39 (of 200) ]
[ time 261 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 38 (of 200) ]
[ time 262 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 37 (of 200) ]
[ time 263 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 36 (of 200) ]
[ time 264 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 35 (of 200) ]
[ time 265 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 34 (of 200) ]
[ time 266 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 33 (of 200) ]
[ time 267 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 32 (of 200) ]
[ time 268 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 31 (of 200) ]
[ time 269 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 30 (of 200) ]
[ time 270 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 29 (of 200) ]
[ time 271 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 28 (of 200) ]
[ time 272 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 27 (of 200) ]
[ time 273 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 26 (of 200) ]
[ time 274 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 25 (of 200) ]
[ time 275 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 24 (of 200) ]
[ time 276 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 23 (of 200) ]
[ time 277 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 22 (of 200) ]
[ time 278 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 21 (of 200) ]
[ time 279 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 20 (of 200) ]
[ time 280 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 19 (of 200) ]
[ time 281 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 18 (of 200) ]
[ time 282 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 17 (of 200) ]
[ time 283 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 16 (of 200) ]
[ time 284 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 15 (of 200) ]
[ time 285 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 14 (of 200) ]
[ time 286 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 13 (of 200) ]
[ time 287 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 12 (of 200) ]
[ time 288 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 11 (of 200) ]
[ time 289 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 10 (of 200) ]
[ time 290 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 9 (of 200) ]
[ time 291 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 8 (of 200) ]
[ time 292 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 7 (of 200) ]
[ time 293 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 6 (of 200) ]
[ time 294 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 5 (of 200) ]
[ time 295 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 4 (of 200) ]
[ time 296 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 3 (of 200) ]
[ time 297 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 2 (of 200) ]
[ time 298 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 1 (of 200) ]
[ time 299 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 0 (of 200) ]
[ time 300 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 300
  Job  1: startTime 100 - response   1 - turnaround 132
  Job  2: startTime 100 - response   2 - turnaround 133

  Avg  2: startTime n/a - response 1.00 - turnaround 188.33
```