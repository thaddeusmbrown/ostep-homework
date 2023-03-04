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
___
### Attempt #3: Better Accounting
![Figure 8.6: Without (Left) and With (Right) Gaming Tolerance](/images/Figure%208.6.png)

**Without Gaming Tolerance**

We have two jobs:

  One CPU-intensive job that we will run for 200 ms
  One interactive job that we will run for 100 ms

  Three queues with 10 ms quanta
  
  Interactive job will have 9 ms IO with STAY active so it does not drop in priority
  
  Boost is off.
___
#### Input
```console
./mlfq.py --jlist=0,200,0:80,100,9 -n 3 -Q 10,10,10 -i 1 -S -s 0 -c
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
  Job  1: startTime  80 - runTime 100 - ioFreq   9


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
[ time 80 ] JOB BEGINS by JOB 1
[ time 80 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 99 (of 100) ]
[ time 81 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 98 (of 100) ]
[ time 82 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 97 (of 100) ]
[ time 83 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 96 (of 100) ]
[ time 84 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 95 (of 100) ]
[ time 85 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 94 (of 100) ]
[ time 86 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 93 (of 100) ]
[ time 87 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 92 (of 100) ]
[ time 88 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 91 (of 100) ]
[ time 89 ] IO_START by JOB 1
IO DONE
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 119 (of 200) ]
[ time 90 ] IO_DONE by JOB 1
[ time 90 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 90 (of 100) ]
[ time 91 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 89 (of 100) ]
[ time 92 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 88 (of 100) ]
[ time 93 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 87 (of 100) ]
[ time 94 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 86 (of 100) ]
[ time 95 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 85 (of 100) ]
[ time 96 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 84 (of 100) ]
[ time 97 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 83 (of 100) ]
[ time 98 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 82 (of 100) ]
[ time 99 ] IO_START by JOB 1
IO DONE
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 118 (of 200) ]
[ time 100 ] IO_DONE by JOB 1
[ time 100 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 81 (of 100) ]
[ time 101 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 80 (of 100) ]
[ time 102 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 79 (of 100) ]
[ time 103 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 78 (of 100) ]
[ time 104 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 77 (of 100) ]
[ time 105 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 76 (of 100) ]
[ time 106 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 75 (of 100) ]
[ time 107 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 74 (of 100) ]
[ time 108 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 73 (of 100) ]
[ time 109 ] IO_START by JOB 1
IO DONE
[ time 109 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 117 (of 200) ]
[ time 110 ] IO_DONE by JOB 1
[ time 110 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 72 (of 100) ]
[ time 111 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 71 (of 100) ]
[ time 112 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 70 (of 100) ]
[ time 113 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 69 (of 100) ]
[ time 114 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 68 (of 100) ]
[ time 115 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 67 (of 100) ]
[ time 116 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 66 (of 100) ]
[ time 117 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 65 (of 100) ]
[ time 118 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 64 (of 100) ]
[ time 119 ] IO_START by JOB 1
IO DONE
[ time 119 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 116 (of 200) ]
[ time 120 ] IO_DONE by JOB 1
[ time 120 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 63 (of 100) ]
[ time 121 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 62 (of 100) ]
[ time 122 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 61 (of 100) ]
[ time 123 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 60 (of 100) ]
[ time 124 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 59 (of 100) ]
[ time 125 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 58 (of 100) ]
[ time 126 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 57 (of 100) ]
[ time 127 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 56 (of 100) ]
[ time 128 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 55 (of 100) ]
[ time 129 ] IO_START by JOB 1
IO DONE
[ time 129 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 115 (of 200) ]
[ time 130 ] IO_DONE by JOB 1
[ time 130 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 54 (of 100) ]
[ time 131 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 53 (of 100) ]
[ time 132 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 52 (of 100) ]
[ time 133 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 51 (of 100) ]
[ time 134 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 50 (of 100) ]
[ time 135 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 49 (of 100) ]
[ time 136 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 48 (of 100) ]
[ time 137 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 47 (of 100) ]
[ time 138 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 46 (of 100) ]
[ time 139 ] IO_START by JOB 1
IO DONE
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 114 (of 200) ]
[ time 140 ] IO_DONE by JOB 1
[ time 140 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 45 (of 100) ]
[ time 141 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 44 (of 100) ]
[ time 142 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 43 (of 100) ]
[ time 143 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 42 (of 100) ]
[ time 144 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 41 (of 100) ]
[ time 145 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 40 (of 100) ]
[ time 146 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 39 (of 100) ]
[ time 147 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 38 (of 100) ]
[ time 148 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 37 (of 100) ]
[ time 149 ] IO_START by JOB 1
IO DONE
[ time 149 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 113 (of 200) ]
[ time 150 ] IO_DONE by JOB 1
[ time 150 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 36 (of 100) ]
[ time 151 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 35 (of 100) ]
[ time 152 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 34 (of 100) ]
[ time 153 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 33 (of 100) ]
[ time 154 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 32 (of 100) ]
[ time 155 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 31 (of 100) ]
[ time 156 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 30 (of 100) ]
[ time 157 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 29 (of 100) ]
[ time 158 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 28 (of 100) ]
[ time 159 ] IO_START by JOB 1
IO DONE
[ time 159 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 112 (of 200) ]
[ time 160 ] IO_DONE by JOB 1
[ time 160 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 27 (of 100) ]
[ time 161 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 26 (of 100) ]
[ time 162 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 25 (of 100) ]
[ time 163 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 24 (of 100) ]
[ time 164 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 23 (of 100) ]
[ time 165 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 22 (of 100) ]
[ time 166 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 21 (of 100) ]
[ time 167 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 20 (of 100) ]
[ time 168 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 19 (of 100) ]
[ time 169 ] IO_START by JOB 1
IO DONE
[ time 169 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 111 (of 200) ]
[ time 170 ] IO_DONE by JOB 1
[ time 170 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 18 (of 100) ]
[ time 171 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 17 (of 100) ]
[ time 172 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 16 (of 100) ]
[ time 173 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 15 (of 100) ]
[ time 174 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 14 (of 100) ]
[ time 175 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 13 (of 100) ]
[ time 176 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 12 (of 100) ]
[ time 177 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 11 (of 100) ]
[ time 178 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 10 (of 100) ]
[ time 179 ] IO_START by JOB 1
IO DONE
[ time 179 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 110 (of 200) ]
[ time 180 ] IO_DONE by JOB 1
[ time 180 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 9 (of 100) ]
[ time 181 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 8 (of 100) ]
[ time 182 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 7 (of 100) ]
[ time 183 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 6 (of 100) ]
[ time 184 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 5 (of 100) ]
[ time 185 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 4 (of 100) ]
[ time 186 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 3 (of 100) ]
[ time 187 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 2 (of 100) ]
[ time 188 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 1 (of 100) ]
[ time 189 ] IO_START by JOB 1
IO DONE
[ time 189 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 109 (of 200) ]
[ time 190 ] IO_DONE by JOB 1
[ time 190 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 0 (of 100) ]
[ time 191 ] FINISHED JOB 1
[ time 191 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 108 (of 200) ]
[ time 192 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 107 (of 200) ]
[ time 193 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 106 (of 200) ]
[ time 194 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 105 (of 200) ]
[ time 195 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 104 (of 200) ]
[ time 196 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 103 (of 200) ]
[ time 197 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 102 (of 200) ]
[ time 198 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 101 (of 200) ]
[ time 199 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 100 (of 200) ]
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
  Job  1: startTime  80 - response   0 - turnaround 111

  Avg  1: startTime n/a - response 0.00 - turnaround 205.50
```
___
**With Gaming Tolerance**

Here, we run the same input, but without the arbitrary reset of priority when a job initiates an IO

#### Input
```console
./mlfq.py --jlist=0,200,0:80,100,9 -n 3 -Q 10,10,10 -i 1 -s 0 -c
```

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
OPTIONS ioTime 1
OPTIONS stayAfterIO False
OPTIONS iobump False


For each job, three defining characteristics are given:
  startTime : at what time does the job enter the system
  runTime   : the total CPU time needed by the job to finish
  ioFreq    : every ioFreq time units, the job issues an I/O
              (the I/O takes ioTime units to complete)

Job List:
  Job  0: startTime   0 - runTime 200 - ioFreq   0
  Job  1: startTime  80 - runTime 100 - ioFreq   9


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
[ time 80 ] JOB BEGINS by JOB 1
[ time 80 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 99 (of 100) ]
[ time 81 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 98 (of 100) ]
[ time 82 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 97 (of 100) ]
[ time 83 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 96 (of 100) ]
[ time 84 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 95 (of 100) ]
[ time 85 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 94 (of 100) ]
[ time 86 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 93 (of 100) ]
[ time 87 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 92 (of 100) ]
[ time 88 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 91 (of 100) ]
[ time 89 ] IO_START by JOB 1
IO DONE
[ time 89 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 119 (of 200) ]
[ time 90 ] IO_DONE by JOB 1
[ time 90 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 90 (of 100) ]
[ time 91 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 89 (of 100) ]
[ time 92 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 88 (of 100) ]
[ time 93 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 87 (of 100) ]
[ time 94 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 86 (of 100) ]
[ time 95 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 85 (of 100) ]
[ time 96 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 84 (of 100) ]
[ time 97 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 83 (of 100) ]
[ time 98 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 82 (of 100) ]
[ time 99 ] IO_START by JOB 1
IO DONE
[ time 99 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 118 (of 200) ]
[ time 100 ] IO_DONE by JOB 1
[ time 100 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 81 (of 100) ]
[ time 101 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 80 (of 100) ]
[ time 102 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 117 (of 200) ]
[ time 103 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 116 (of 200) ]
[ time 104 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 115 (of 200) ]
[ time 105 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 114 (of 200) ]
[ time 106 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 113 (of 200) ]
[ time 107 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 112 (of 200) ]
[ time 108 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 111 (of 200) ]
[ time 109 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 110 (of 200) ]
[ time 110 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 100) ]
[ time 111 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 100) ]
[ time 112 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 100) ]
[ time 113 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 100) ]
[ time 114 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 100) ]
[ time 115 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 100) ]
[ time 116 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 100) ]
[ time 117 ] IO_START by JOB 1
IO DONE
[ time 117 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 109 (of 200) ]
[ time 118 ] IO_DONE by JOB 1
[ time 118 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 108 (of 200) ]
[ time 119 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 107 (of 200) ]
[ time 120 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 106 (of 200) ]
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 105 (of 200) ]
[ time 122 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 104 (of 200) ]
[ time 123 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 103 (of 200) ]
[ time 124 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 102 (of 200) ]
[ time 125 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 101 (of 200) ]
[ time 126 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 100 (of 200) ]
[ time 127 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 100) ]
[ time 128 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 100) ]
[ time 129 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 100) ]
[ time 130 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 99 (of 200) ]
[ time 131 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 98 (of 200) ]
[ time 132 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 97 (of 200) ]
[ time 133 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 96 (of 200) ]
[ time 134 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 95 (of 200) ]
[ time 135 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 94 (of 200) ]
[ time 136 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 93 (of 200) ]
[ time 137 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 92 (of 200) ]
[ time 138 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 91 (of 200) ]
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 90 (of 200) ]
[ time 140 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 69 (of 100) ]
[ time 141 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 68 (of 100) ]
[ time 142 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 67 (of 100) ]
[ time 143 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 66 (of 100) ]
[ time 144 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 65 (of 100) ]
[ time 145 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 64 (of 100) ]
[ time 146 ] IO_START by JOB 1
IO DONE
[ time 146 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 89 (of 200) ]
[ time 147 ] IO_DONE by JOB 1
[ time 147 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 88 (of 200) ]
[ time 148 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 87 (of 200) ]
[ time 149 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 86 (of 200) ]
[ time 150 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 85 (of 200) ]
[ time 151 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 84 (of 200) ]
[ time 152 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 83 (of 200) ]
[ time 153 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 82 (of 200) ]
[ time 154 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 81 (of 200) ]
[ time 155 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 80 (of 200) ]
[ time 156 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 63 (of 100) ]
[ time 157 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 62 (of 100) ]
[ time 158 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 61 (of 100) ]
[ time 159 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 60 (of 100) ]
[ time 160 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 79 (of 200) ]
[ time 161 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 78 (of 200) ]
[ time 162 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 77 (of 200) ]
[ time 163 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 76 (of 200) ]
[ time 164 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 75 (of 200) ]
[ time 165 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 74 (of 200) ]
[ time 166 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 73 (of 200) ]
[ time 167 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 72 (of 200) ]
[ time 168 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 71 (of 200) ]
[ time 169 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 70 (of 200) ]
[ time 170 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 59 (of 100) ]
[ time 171 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 58 (of 100) ]
[ time 172 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 57 (of 100) ]
[ time 173 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 56 (of 100) ]
[ time 174 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 55 (of 100) ]
[ time 175 ] IO_START by JOB 1
IO DONE
[ time 175 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 69 (of 200) ]
[ time 176 ] IO_DONE by JOB 1
[ time 176 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 68 (of 200) ]
[ time 177 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 67 (of 200) ]
[ time 178 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 66 (of 200) ]
[ time 179 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 65 (of 200) ]
[ time 180 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 64 (of 200) ]
[ time 181 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 63 (of 200) ]
[ time 182 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 62 (of 200) ]
[ time 183 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 61 (of 200) ]
[ time 184 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 60 (of 200) ]
[ time 185 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 54 (of 100) ]
[ time 186 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 53 (of 100) ]
[ time 187 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 52 (of 100) ]
[ time 188 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 51 (of 100) ]
[ time 189 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 50 (of 100) ]
[ time 190 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 59 (of 200) ]
[ time 191 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 58 (of 200) ]
[ time 192 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 57 (of 200) ]
[ time 193 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 56 (of 200) ]
[ time 194 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 55 (of 200) ]
[ time 195 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 54 (of 200) ]
[ time 196 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 53 (of 200) ]
[ time 197 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 52 (of 200) ]
[ time 198 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 51 (of 200) ]
[ time 199 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 50 (of 200) ]
[ time 200 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 100) ]
[ time 201 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 100) ]
[ time 202 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 100) ]
[ time 203 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 100) ]
[ time 204 ] IO_START by JOB 1
IO DONE
[ time 204 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 49 (of 200) ]
[ time 205 ] IO_DONE by JOB 1
[ time 205 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 48 (of 200) ]
[ time 206 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 47 (of 200) ]
[ time 207 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 46 (of 200) ]
[ time 208 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 200) ]
[ time 209 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 200) ]
[ time 210 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 200) ]
[ time 211 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 200) ]
[ time 212 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 200) ]
[ time 213 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 200) ]
[ time 214 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 45 (of 100) ]
[ time 215 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 44 (of 100) ]
[ time 216 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 43 (of 100) ]
[ time 217 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 42 (of 100) ]
[ time 218 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 41 (of 100) ]
[ time 219 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 40 (of 100) ]
[ time 220 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 200) ]
[ time 221 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 200) ]
[ time 222 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 200) ]
[ time 223 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 200) ]
[ time 224 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 200) ]
[ time 225 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 200) ]
[ time 226 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 200) ]
[ time 227 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 200) ]
[ time 228 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 200) ]
[ time 229 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 200) ]
[ time 230 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 100) ]
[ time 231 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 100) ]
[ time 232 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 100) ]
[ time 233 ] IO_START by JOB 1
IO DONE
[ time 233 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 200) ]
[ time 234 ] IO_DONE by JOB 1
[ time 234 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 200) ]
[ time 235 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 200) ]
[ time 236 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 200) ]
[ time 237 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 200) ]
[ time 238 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 200) ]
[ time 239 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 200) ]
[ time 240 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 200) ]
[ time 241 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 200) ]
[ time 242 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 200) ]
[ time 243 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 100) ]
[ time 244 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 100) ]
[ time 245 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 100) ]
[ time 246 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 100) ]
[ time 247 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 100) ]
[ time 248 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 100) ]
[ time 249 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 100) ]
[ time 250 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 200) ]
[ time 251 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 200) ]
[ time 252 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 200) ]
[ time 253 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 200) ]
[ time 254 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 200) ]
[ time 255 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 200) ]
[ time 256 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 200) ]
[ time 257 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 200) ]
[ time 258 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 200) ]
[ time 259 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 200) ]
[ time 260 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 100) ]
[ time 261 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 100) ]
[ time 262 ] IO_START by JOB 1
IO DONE
[ time 262 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 200) ]
[ time 263 ] IO_DONE by JOB 1
[ time 263 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 200) ]
[ time 264 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 200) ]
[ time 265 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 200) ]
[ time 266 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 200) ]
[ time 267 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 200) ]
[ time 268 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 200) ]
[ time 269 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 200) ]
[ time 270 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 200) ]
[ time 271 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 200) ]
[ time 272 ] FINISHED JOB 0
[ time 272 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 100) ]
[ time 273 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 100) ]
[ time 274 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 100) ]
[ time 275 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 100) ]
[ time 276 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 100) ]
[ time 277 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 100) ]
[ time 278 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 100) ]
[ time 279 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 100) ]
[ time 280 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 100) ]
[ time 281 ] IO_START by JOB 1
IO DONE
[ time 281 ] IDLE
[ time 282 ] IO_DONE by JOB 1
[ time 282 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 100) ]
[ time 283 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 100) ]
[ time 284 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 100) ]
[ time 285 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 100) ]
[ time 286 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 100) ]
[ time 287 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 100) ]
[ time 288 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 100) ]
[ time 289 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 100) ]
[ time 290 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 100) ]
[ time 291 ] IO_START by JOB 1
IO DONE
[ time 291 ] IDLE
[ time 292 ] IO_DONE by JOB 1
[ time 292 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 100) ]
[ time 293 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 100) ]
[ time 294 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 100) ]
[ time 295 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 100) ]
[ time 296 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 100) ]
[ time 297 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 100) ]
[ time 298 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 100) ]
[ time 299 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 100) ]
[ time 300 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 100) ]
[ time 301 ] IO_START by JOB 1
IO DONE
[ time 301 ] IDLE
[ time 302 ] IO_DONE by JOB 1
[ time 302 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 100) ]
[ time 303 ] FINISHED JOB 1

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 272
  Job  1: startTime  80 - response   0 - turnaround 223

  Avg  1: startTime n/a - response 0.00 - turnaround 247.50
```
___
## Tuning MLFQ And Other Issues
![Figure 8.7: Lower Priority, Longer Quanta](/images/Figure%208.7.png)

Here, we run two, CPU-intensive jobs, each with 0 ms startTime, 150 ms runTime, and 0 IO.  There are three queues.  Highest priority has 10 ms quantum, next has 20 ms, and the last has 40 ms.  There is no priority boost.  Each queue will have two allotments so that each job runs twice before descending in priority.

### Input
```console
./mlfq.py --jlist=0,150,0:0,150,0 -n 3 -Q 10,20,40 -A 2,2,2 -s 0 -c
```

### Output
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 3
OPTIONS allotments for queue  2 is   2
OPTIONS quantum length for queue  2 is  10
OPTIONS allotments for queue  1 is   2
OPTIONS quantum length for queue  1 is  20
OPTIONS allotments for queue  0 is   2
OPTIONS quantum length for queue  0 is  40
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
  Job  0: startTime   0 - runTime 150 - ioFreq   0
  Job  1: startTime   0 - runTime 150 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 2 TIME 149 (of 150) ]
[ time 1 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 2 TIME 148 (of 150) ]
[ time 2 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 2 TIME 147 (of 150) ]
[ time 3 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 2 TIME 146 (of 150) ]
[ time 4 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 2 TIME 145 (of 150) ]
[ time 5 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 2 TIME 144 (of 150) ]
[ time 6 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 2 TIME 143 (of 150) ]
[ time 7 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 2 TIME 142 (of 150) ]
[ time 8 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 2 TIME 141 (of 150) ]
[ time 9 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 2 TIME 140 (of 150) ]
[ time 10 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 2 TIME 149 (of 150) ]
[ time 11 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 2 TIME 148 (of 150) ]
[ time 12 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 2 TIME 147 (of 150) ]
[ time 13 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 2 TIME 146 (of 150) ]
[ time 14 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 2 TIME 145 (of 150) ]
[ time 15 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 2 TIME 144 (of 150) ]
[ time 16 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 2 TIME 143 (of 150) ]
[ time 17 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 2 TIME 142 (of 150) ]
[ time 18 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 2 TIME 141 (of 150) ]
[ time 19 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 2 TIME 140 (of 150) ]
[ time 20 ] Run JOB 0 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 139 (of 150) ]
[ time 21 ] Run JOB 0 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 138 (of 150) ]
[ time 22 ] Run JOB 0 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 137 (of 150) ]
[ time 23 ] Run JOB 0 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 136 (of 150) ]
[ time 24 ] Run JOB 0 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 135 (of 150) ]
[ time 25 ] Run JOB 0 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 134 (of 150) ]
[ time 26 ] Run JOB 0 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 133 (of 150) ]
[ time 27 ] Run JOB 0 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 132 (of 150) ]
[ time 28 ] Run JOB 0 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 131 (of 150) ]
[ time 29 ] Run JOB 0 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 130 (of 150) ]
[ time 30 ] Run JOB 1 at PRIORITY 2 [ TICKS 9 ALLOT 1 TIME 139 (of 150) ]
[ time 31 ] Run JOB 1 at PRIORITY 2 [ TICKS 8 ALLOT 1 TIME 138 (of 150) ]
[ time 32 ] Run JOB 1 at PRIORITY 2 [ TICKS 7 ALLOT 1 TIME 137 (of 150) ]
[ time 33 ] Run JOB 1 at PRIORITY 2 [ TICKS 6 ALLOT 1 TIME 136 (of 150) ]
[ time 34 ] Run JOB 1 at PRIORITY 2 [ TICKS 5 ALLOT 1 TIME 135 (of 150) ]
[ time 35 ] Run JOB 1 at PRIORITY 2 [ TICKS 4 ALLOT 1 TIME 134 (of 150) ]
[ time 36 ] Run JOB 1 at PRIORITY 2 [ TICKS 3 ALLOT 1 TIME 133 (of 150) ]
[ time 37 ] Run JOB 1 at PRIORITY 2 [ TICKS 2 ALLOT 1 TIME 132 (of 150) ]
[ time 38 ] Run JOB 1 at PRIORITY 2 [ TICKS 1 ALLOT 1 TIME 131 (of 150) ]
[ time 39 ] Run JOB 1 at PRIORITY 2 [ TICKS 0 ALLOT 1 TIME 130 (of 150) ]
[ time 40 ] Run JOB 0 at PRIORITY 1 [ TICKS 19 ALLOT 2 TIME 129 (of 150) ]
[ time 41 ] Run JOB 0 at PRIORITY 1 [ TICKS 18 ALLOT 2 TIME 128 (of 150) ]
[ time 42 ] Run JOB 0 at PRIORITY 1 [ TICKS 17 ALLOT 2 TIME 127 (of 150) ]
[ time 43 ] Run JOB 0 at PRIORITY 1 [ TICKS 16 ALLOT 2 TIME 126 (of 150) ]
[ time 44 ] Run JOB 0 at PRIORITY 1 [ TICKS 15 ALLOT 2 TIME 125 (of 150) ]
[ time 45 ] Run JOB 0 at PRIORITY 1 [ TICKS 14 ALLOT 2 TIME 124 (of 150) ]
[ time 46 ] Run JOB 0 at PRIORITY 1 [ TICKS 13 ALLOT 2 TIME 123 (of 150) ]
[ time 47 ] Run JOB 0 at PRIORITY 1 [ TICKS 12 ALLOT 2 TIME 122 (of 150) ]
[ time 48 ] Run JOB 0 at PRIORITY 1 [ TICKS 11 ALLOT 2 TIME 121 (of 150) ]
[ time 49 ] Run JOB 0 at PRIORITY 1 [ TICKS 10 ALLOT 2 TIME 120 (of 150) ]
[ time 50 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 2 TIME 119 (of 150) ]
[ time 51 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 2 TIME 118 (of 150) ]
[ time 52 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 2 TIME 117 (of 150) ]
[ time 53 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 2 TIME 116 (of 150) ]
[ time 54 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 2 TIME 115 (of 150) ]
[ time 55 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 2 TIME 114 (of 150) ]
[ time 56 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 2 TIME 113 (of 150) ]
[ time 57 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 2 TIME 112 (of 150) ]
[ time 58 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 2 TIME 111 (of 150) ]
[ time 59 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 2 TIME 110 (of 150) ]
[ time 60 ] Run JOB 1 at PRIORITY 1 [ TICKS 19 ALLOT 2 TIME 129 (of 150) ]
[ time 61 ] Run JOB 1 at PRIORITY 1 [ TICKS 18 ALLOT 2 TIME 128 (of 150) ]
[ time 62 ] Run JOB 1 at PRIORITY 1 [ TICKS 17 ALLOT 2 TIME 127 (of 150) ]
[ time 63 ] Run JOB 1 at PRIORITY 1 [ TICKS 16 ALLOT 2 TIME 126 (of 150) ]
[ time 64 ] Run JOB 1 at PRIORITY 1 [ TICKS 15 ALLOT 2 TIME 125 (of 150) ]
[ time 65 ] Run JOB 1 at PRIORITY 1 [ TICKS 14 ALLOT 2 TIME 124 (of 150) ]
[ time 66 ] Run JOB 1 at PRIORITY 1 [ TICKS 13 ALLOT 2 TIME 123 (of 150) ]
[ time 67 ] Run JOB 1 at PRIORITY 1 [ TICKS 12 ALLOT 2 TIME 122 (of 150) ]
[ time 68 ] Run JOB 1 at PRIORITY 1 [ TICKS 11 ALLOT 2 TIME 121 (of 150) ]
[ time 69 ] Run JOB 1 at PRIORITY 1 [ TICKS 10 ALLOT 2 TIME 120 (of 150) ]
[ time 70 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 2 TIME 119 (of 150) ]
[ time 71 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 2 TIME 118 (of 150) ]
[ time 72 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 2 TIME 117 (of 150) ]
[ time 73 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 2 TIME 116 (of 150) ]
[ time 74 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 2 TIME 115 (of 150) ]
[ time 75 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 2 TIME 114 (of 150) ]
[ time 76 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 2 TIME 113 (of 150) ]
[ time 77 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 2 TIME 112 (of 150) ]
[ time 78 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 2 TIME 111 (of 150) ]
[ time 79 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 2 TIME 110 (of 150) ]
[ time 80 ] Run JOB 0 at PRIORITY 1 [ TICKS 19 ALLOT 1 TIME 109 (of 150) ]
[ time 81 ] Run JOB 0 at PRIORITY 1 [ TICKS 18 ALLOT 1 TIME 108 (of 150) ]
[ time 82 ] Run JOB 0 at PRIORITY 1 [ TICKS 17 ALLOT 1 TIME 107 (of 150) ]
[ time 83 ] Run JOB 0 at PRIORITY 1 [ TICKS 16 ALLOT 1 TIME 106 (of 150) ]
[ time 84 ] Run JOB 0 at PRIORITY 1 [ TICKS 15 ALLOT 1 TIME 105 (of 150) ]
[ time 85 ] Run JOB 0 at PRIORITY 1 [ TICKS 14 ALLOT 1 TIME 104 (of 150) ]
[ time 86 ] Run JOB 0 at PRIORITY 1 [ TICKS 13 ALLOT 1 TIME 103 (of 150) ]
[ time 87 ] Run JOB 0 at PRIORITY 1 [ TICKS 12 ALLOT 1 TIME 102 (of 150) ]
[ time 88 ] Run JOB 0 at PRIORITY 1 [ TICKS 11 ALLOT 1 TIME 101 (of 150) ]
[ time 89 ] Run JOB 0 at PRIORITY 1 [ TICKS 10 ALLOT 1 TIME 100 (of 150) ]
[ time 90 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 99 (of 150) ]
[ time 91 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 98 (of 150) ]
[ time 92 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 97 (of 150) ]
[ time 93 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 96 (of 150) ]
[ time 94 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 95 (of 150) ]
[ time 95 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 94 (of 150) ]
[ time 96 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 93 (of 150) ]
[ time 97 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 92 (of 150) ]
[ time 98 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 91 (of 150) ]
[ time 99 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 90 (of 150) ]
[ time 100 ] Run JOB 1 at PRIORITY 1 [ TICKS 19 ALLOT 1 TIME 109 (of 150) ]
[ time 101 ] Run JOB 1 at PRIORITY 1 [ TICKS 18 ALLOT 1 TIME 108 (of 150) ]
[ time 102 ] Run JOB 1 at PRIORITY 1 [ TICKS 17 ALLOT 1 TIME 107 (of 150) ]
[ time 103 ] Run JOB 1 at PRIORITY 1 [ TICKS 16 ALLOT 1 TIME 106 (of 150) ]
[ time 104 ] Run JOB 1 at PRIORITY 1 [ TICKS 15 ALLOT 1 TIME 105 (of 150) ]
[ time 105 ] Run JOB 1 at PRIORITY 1 [ TICKS 14 ALLOT 1 TIME 104 (of 150) ]
[ time 106 ] Run JOB 1 at PRIORITY 1 [ TICKS 13 ALLOT 1 TIME 103 (of 150) ]
[ time 107 ] Run JOB 1 at PRIORITY 1 [ TICKS 12 ALLOT 1 TIME 102 (of 150) ]
[ time 108 ] Run JOB 1 at PRIORITY 1 [ TICKS 11 ALLOT 1 TIME 101 (of 150) ]
[ time 109 ] Run JOB 1 at PRIORITY 1 [ TICKS 10 ALLOT 1 TIME 100 (of 150) ]
[ time 110 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 99 (of 150) ]
[ time 111 ] Run JOB 1 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 98 (of 150) ]
[ time 112 ] Run JOB 1 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 97 (of 150) ]
[ time 113 ] Run JOB 1 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 96 (of 150) ]
[ time 114 ] Run JOB 1 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 95 (of 150) ]
[ time 115 ] Run JOB 1 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 94 (of 150) ]
[ time 116 ] Run JOB 1 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 93 (of 150) ]
[ time 117 ] Run JOB 1 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 92 (of 150) ]
[ time 118 ] Run JOB 1 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 91 (of 150) ]
[ time 119 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 90 (of 150) ]
[ time 120 ] Run JOB 0 at PRIORITY 0 [ TICKS 39 ALLOT 2 TIME 89 (of 150) ]
[ time 121 ] Run JOB 0 at PRIORITY 0 [ TICKS 38 ALLOT 2 TIME 88 (of 150) ]
[ time 122 ] Run JOB 0 at PRIORITY 0 [ TICKS 37 ALLOT 2 TIME 87 (of 150) ]
[ time 123 ] Run JOB 0 at PRIORITY 0 [ TICKS 36 ALLOT 2 TIME 86 (of 150) ]
[ time 124 ] Run JOB 0 at PRIORITY 0 [ TICKS 35 ALLOT 2 TIME 85 (of 150) ]
[ time 125 ] Run JOB 0 at PRIORITY 0 [ TICKS 34 ALLOT 2 TIME 84 (of 150) ]
[ time 126 ] Run JOB 0 at PRIORITY 0 [ TICKS 33 ALLOT 2 TIME 83 (of 150) ]
[ time 127 ] Run JOB 0 at PRIORITY 0 [ TICKS 32 ALLOT 2 TIME 82 (of 150) ]
[ time 128 ] Run JOB 0 at PRIORITY 0 [ TICKS 31 ALLOT 2 TIME 81 (of 150) ]
[ time 129 ] Run JOB 0 at PRIORITY 0 [ TICKS 30 ALLOT 2 TIME 80 (of 150) ]
[ time 130 ] Run JOB 0 at PRIORITY 0 [ TICKS 29 ALLOT 2 TIME 79 (of 150) ]
[ time 131 ] Run JOB 0 at PRIORITY 0 [ TICKS 28 ALLOT 2 TIME 78 (of 150) ]
[ time 132 ] Run JOB 0 at PRIORITY 0 [ TICKS 27 ALLOT 2 TIME 77 (of 150) ]
[ time 133 ] Run JOB 0 at PRIORITY 0 [ TICKS 26 ALLOT 2 TIME 76 (of 150) ]
[ time 134 ] Run JOB 0 at PRIORITY 0 [ TICKS 25 ALLOT 2 TIME 75 (of 150) ]
[ time 135 ] Run JOB 0 at PRIORITY 0 [ TICKS 24 ALLOT 2 TIME 74 (of 150) ]
[ time 136 ] Run JOB 0 at PRIORITY 0 [ TICKS 23 ALLOT 2 TIME 73 (of 150) ]
[ time 137 ] Run JOB 0 at PRIORITY 0 [ TICKS 22 ALLOT 2 TIME 72 (of 150) ]
[ time 138 ] Run JOB 0 at PRIORITY 0 [ TICKS 21 ALLOT 2 TIME 71 (of 150) ]
[ time 139 ] Run JOB 0 at PRIORITY 0 [ TICKS 20 ALLOT 2 TIME 70 (of 150) ]
[ time 140 ] Run JOB 0 at PRIORITY 0 [ TICKS 19 ALLOT 2 TIME 69 (of 150) ]
[ time 141 ] Run JOB 0 at PRIORITY 0 [ TICKS 18 ALLOT 2 TIME 68 (of 150) ]
[ time 142 ] Run JOB 0 at PRIORITY 0 [ TICKS 17 ALLOT 2 TIME 67 (of 150) ]
[ time 143 ] Run JOB 0 at PRIORITY 0 [ TICKS 16 ALLOT 2 TIME 66 (of 150) ]
[ time 144 ] Run JOB 0 at PRIORITY 0 [ TICKS 15 ALLOT 2 TIME 65 (of 150) ]
[ time 145 ] Run JOB 0 at PRIORITY 0 [ TICKS 14 ALLOT 2 TIME 64 (of 150) ]
[ time 146 ] Run JOB 0 at PRIORITY 0 [ TICKS 13 ALLOT 2 TIME 63 (of 150) ]
[ time 147 ] Run JOB 0 at PRIORITY 0 [ TICKS 12 ALLOT 2 TIME 62 (of 150) ]
[ time 148 ] Run JOB 0 at PRIORITY 0 [ TICKS 11 ALLOT 2 TIME 61 (of 150) ]
[ time 149 ] Run JOB 0 at PRIORITY 0 [ TICKS 10 ALLOT 2 TIME 60 (of 150) ]
[ time 150 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 2 TIME 59 (of 150) ]
[ time 151 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 2 TIME 58 (of 150) ]
[ time 152 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 2 TIME 57 (of 150) ]
[ time 153 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 2 TIME 56 (of 150) ]
[ time 154 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 2 TIME 55 (of 150) ]
[ time 155 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 2 TIME 54 (of 150) ]
[ time 156 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 2 TIME 53 (of 150) ]
[ time 157 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 2 TIME 52 (of 150) ]
[ time 158 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 2 TIME 51 (of 150) ]
[ time 159 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 2 TIME 50 (of 150) ]
[ time 160 ] Run JOB 1 at PRIORITY 0 [ TICKS 39 ALLOT 2 TIME 89 (of 150) ]
[ time 161 ] Run JOB 1 at PRIORITY 0 [ TICKS 38 ALLOT 2 TIME 88 (of 150) ]
[ time 162 ] Run JOB 1 at PRIORITY 0 [ TICKS 37 ALLOT 2 TIME 87 (of 150) ]
[ time 163 ] Run JOB 1 at PRIORITY 0 [ TICKS 36 ALLOT 2 TIME 86 (of 150) ]
[ time 164 ] Run JOB 1 at PRIORITY 0 [ TICKS 35 ALLOT 2 TIME 85 (of 150) ]
[ time 165 ] Run JOB 1 at PRIORITY 0 [ TICKS 34 ALLOT 2 TIME 84 (of 150) ]
[ time 166 ] Run JOB 1 at PRIORITY 0 [ TICKS 33 ALLOT 2 TIME 83 (of 150) ]
[ time 167 ] Run JOB 1 at PRIORITY 0 [ TICKS 32 ALLOT 2 TIME 82 (of 150) ]
[ time 168 ] Run JOB 1 at PRIORITY 0 [ TICKS 31 ALLOT 2 TIME 81 (of 150) ]
[ time 169 ] Run JOB 1 at PRIORITY 0 [ TICKS 30 ALLOT 2 TIME 80 (of 150) ]
[ time 170 ] Run JOB 1 at PRIORITY 0 [ TICKS 29 ALLOT 2 TIME 79 (of 150) ]
[ time 171 ] Run JOB 1 at PRIORITY 0 [ TICKS 28 ALLOT 2 TIME 78 (of 150) ]
[ time 172 ] Run JOB 1 at PRIORITY 0 [ TICKS 27 ALLOT 2 TIME 77 (of 150) ]
[ time 173 ] Run JOB 1 at PRIORITY 0 [ TICKS 26 ALLOT 2 TIME 76 (of 150) ]
[ time 174 ] Run JOB 1 at PRIORITY 0 [ TICKS 25 ALLOT 2 TIME 75 (of 150) ]
[ time 175 ] Run JOB 1 at PRIORITY 0 [ TICKS 24 ALLOT 2 TIME 74 (of 150) ]
[ time 176 ] Run JOB 1 at PRIORITY 0 [ TICKS 23 ALLOT 2 TIME 73 (of 150) ]
[ time 177 ] Run JOB 1 at PRIORITY 0 [ TICKS 22 ALLOT 2 TIME 72 (of 150) ]
[ time 178 ] Run JOB 1 at PRIORITY 0 [ TICKS 21 ALLOT 2 TIME 71 (of 150) ]
[ time 179 ] Run JOB 1 at PRIORITY 0 [ TICKS 20 ALLOT 2 TIME 70 (of 150) ]
[ time 180 ] Run JOB 1 at PRIORITY 0 [ TICKS 19 ALLOT 2 TIME 69 (of 150) ]
[ time 181 ] Run JOB 1 at PRIORITY 0 [ TICKS 18 ALLOT 2 TIME 68 (of 150) ]
[ time 182 ] Run JOB 1 at PRIORITY 0 [ TICKS 17 ALLOT 2 TIME 67 (of 150) ]
[ time 183 ] Run JOB 1 at PRIORITY 0 [ TICKS 16 ALLOT 2 TIME 66 (of 150) ]
[ time 184 ] Run JOB 1 at PRIORITY 0 [ TICKS 15 ALLOT 2 TIME 65 (of 150) ]
[ time 185 ] Run JOB 1 at PRIORITY 0 [ TICKS 14 ALLOT 2 TIME 64 (of 150) ]
[ time 186 ] Run JOB 1 at PRIORITY 0 [ TICKS 13 ALLOT 2 TIME 63 (of 150) ]
[ time 187 ] Run JOB 1 at PRIORITY 0 [ TICKS 12 ALLOT 2 TIME 62 (of 150) ]
[ time 188 ] Run JOB 1 at PRIORITY 0 [ TICKS 11 ALLOT 2 TIME 61 (of 150) ]
[ time 189 ] Run JOB 1 at PRIORITY 0 [ TICKS 10 ALLOT 2 TIME 60 (of 150) ]
[ time 190 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 2 TIME 59 (of 150) ]
[ time 191 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 2 TIME 58 (of 150) ]
[ time 192 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 2 TIME 57 (of 150) ]
[ time 193 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 2 TIME 56 (of 150) ]
[ time 194 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 2 TIME 55 (of 150) ]
[ time 195 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 2 TIME 54 (of 150) ]
[ time 196 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 2 TIME 53 (of 150) ]
[ time 197 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 2 TIME 52 (of 150) ]
[ time 198 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 2 TIME 51 (of 150) ]
[ time 199 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 2 TIME 50 (of 150) ]
[ time 200 ] Run JOB 0 at PRIORITY 0 [ TICKS 39 ALLOT 1 TIME 49 (of 150) ]
[ time 201 ] Run JOB 0 at PRIORITY 0 [ TICKS 38 ALLOT 1 TIME 48 (of 150) ]
[ time 202 ] Run JOB 0 at PRIORITY 0 [ TICKS 37 ALLOT 1 TIME 47 (of 150) ]
[ time 203 ] Run JOB 0 at PRIORITY 0 [ TICKS 36 ALLOT 1 TIME 46 (of 150) ]
[ time 204 ] Run JOB 0 at PRIORITY 0 [ TICKS 35 ALLOT 1 TIME 45 (of 150) ]
[ time 205 ] Run JOB 0 at PRIORITY 0 [ TICKS 34 ALLOT 1 TIME 44 (of 150) ]
[ time 206 ] Run JOB 0 at PRIORITY 0 [ TICKS 33 ALLOT 1 TIME 43 (of 150) ]
[ time 207 ] Run JOB 0 at PRIORITY 0 [ TICKS 32 ALLOT 1 TIME 42 (of 150) ]
[ time 208 ] Run JOB 0 at PRIORITY 0 [ TICKS 31 ALLOT 1 TIME 41 (of 150) ]
[ time 209 ] Run JOB 0 at PRIORITY 0 [ TICKS 30 ALLOT 1 TIME 40 (of 150) ]
[ time 210 ] Run JOB 0 at PRIORITY 0 [ TICKS 29 ALLOT 1 TIME 39 (of 150) ]
[ time 211 ] Run JOB 0 at PRIORITY 0 [ TICKS 28 ALLOT 1 TIME 38 (of 150) ]
[ time 212 ] Run JOB 0 at PRIORITY 0 [ TICKS 27 ALLOT 1 TIME 37 (of 150) ]
[ time 213 ] Run JOB 0 at PRIORITY 0 [ TICKS 26 ALLOT 1 TIME 36 (of 150) ]
[ time 214 ] Run JOB 0 at PRIORITY 0 [ TICKS 25 ALLOT 1 TIME 35 (of 150) ]
[ time 215 ] Run JOB 0 at PRIORITY 0 [ TICKS 24 ALLOT 1 TIME 34 (of 150) ]
[ time 216 ] Run JOB 0 at PRIORITY 0 [ TICKS 23 ALLOT 1 TIME 33 (of 150) ]
[ time 217 ] Run JOB 0 at PRIORITY 0 [ TICKS 22 ALLOT 1 TIME 32 (of 150) ]
[ time 218 ] Run JOB 0 at PRIORITY 0 [ TICKS 21 ALLOT 1 TIME 31 (of 150) ]
[ time 219 ] Run JOB 0 at PRIORITY 0 [ TICKS 20 ALLOT 1 TIME 30 (of 150) ]
[ time 220 ] Run JOB 0 at PRIORITY 0 [ TICKS 19 ALLOT 1 TIME 29 (of 150) ]
[ time 221 ] Run JOB 0 at PRIORITY 0 [ TICKS 18 ALLOT 1 TIME 28 (of 150) ]
[ time 222 ] Run JOB 0 at PRIORITY 0 [ TICKS 17 ALLOT 1 TIME 27 (of 150) ]
[ time 223 ] Run JOB 0 at PRIORITY 0 [ TICKS 16 ALLOT 1 TIME 26 (of 150) ]
[ time 224 ] Run JOB 0 at PRIORITY 0 [ TICKS 15 ALLOT 1 TIME 25 (of 150) ]
[ time 225 ] Run JOB 0 at PRIORITY 0 [ TICKS 14 ALLOT 1 TIME 24 (of 150) ]
[ time 226 ] Run JOB 0 at PRIORITY 0 [ TICKS 13 ALLOT 1 TIME 23 (of 150) ]
[ time 227 ] Run JOB 0 at PRIORITY 0 [ TICKS 12 ALLOT 1 TIME 22 (of 150) ]
[ time 228 ] Run JOB 0 at PRIORITY 0 [ TICKS 11 ALLOT 1 TIME 21 (of 150) ]
[ time 229 ] Run JOB 0 at PRIORITY 0 [ TICKS 10 ALLOT 1 TIME 20 (of 150) ]
[ time 230 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 150) ]
[ time 231 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 150) ]
[ time 232 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 150) ]
[ time 233 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 150) ]
[ time 234 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 150) ]
[ time 235 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 150) ]
[ time 236 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 150) ]
[ time 237 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 150) ]
[ time 238 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 150) ]
[ time 239 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 150) ]
[ time 240 ] Run JOB 1 at PRIORITY 0 [ TICKS 39 ALLOT 1 TIME 49 (of 150) ]
[ time 241 ] Run JOB 1 at PRIORITY 0 [ TICKS 38 ALLOT 1 TIME 48 (of 150) ]
[ time 242 ] Run JOB 1 at PRIORITY 0 [ TICKS 37 ALLOT 1 TIME 47 (of 150) ]
[ time 243 ] Run JOB 1 at PRIORITY 0 [ TICKS 36 ALLOT 1 TIME 46 (of 150) ]
[ time 244 ] Run JOB 1 at PRIORITY 0 [ TICKS 35 ALLOT 1 TIME 45 (of 150) ]
[ time 245 ] Run JOB 1 at PRIORITY 0 [ TICKS 34 ALLOT 1 TIME 44 (of 150) ]
[ time 246 ] Run JOB 1 at PRIORITY 0 [ TICKS 33 ALLOT 1 TIME 43 (of 150) ]
[ time 247 ] Run JOB 1 at PRIORITY 0 [ TICKS 32 ALLOT 1 TIME 42 (of 150) ]
[ time 248 ] Run JOB 1 at PRIORITY 0 [ TICKS 31 ALLOT 1 TIME 41 (of 150) ]
[ time 249 ] Run JOB 1 at PRIORITY 0 [ TICKS 30 ALLOT 1 TIME 40 (of 150) ]
[ time 250 ] Run JOB 1 at PRIORITY 0 [ TICKS 29 ALLOT 1 TIME 39 (of 150) ]
[ time 251 ] Run JOB 1 at PRIORITY 0 [ TICKS 28 ALLOT 1 TIME 38 (of 150) ]
[ time 252 ] Run JOB 1 at PRIORITY 0 [ TICKS 27 ALLOT 1 TIME 37 (of 150) ]
[ time 253 ] Run JOB 1 at PRIORITY 0 [ TICKS 26 ALLOT 1 TIME 36 (of 150) ]
[ time 254 ] Run JOB 1 at PRIORITY 0 [ TICKS 25 ALLOT 1 TIME 35 (of 150) ]
[ time 255 ] Run JOB 1 at PRIORITY 0 [ TICKS 24 ALLOT 1 TIME 34 (of 150) ]
[ time 256 ] Run JOB 1 at PRIORITY 0 [ TICKS 23 ALLOT 1 TIME 33 (of 150) ]
[ time 257 ] Run JOB 1 at PRIORITY 0 [ TICKS 22 ALLOT 1 TIME 32 (of 150) ]
[ time 258 ] Run JOB 1 at PRIORITY 0 [ TICKS 21 ALLOT 1 TIME 31 (of 150) ]
[ time 259 ] Run JOB 1 at PRIORITY 0 [ TICKS 20 ALLOT 1 TIME 30 (of 150) ]
[ time 260 ] Run JOB 1 at PRIORITY 0 [ TICKS 19 ALLOT 1 TIME 29 (of 150) ]
[ time 261 ] Run JOB 1 at PRIORITY 0 [ TICKS 18 ALLOT 1 TIME 28 (of 150) ]
[ time 262 ] Run JOB 1 at PRIORITY 0 [ TICKS 17 ALLOT 1 TIME 27 (of 150) ]
[ time 263 ] Run JOB 1 at PRIORITY 0 [ TICKS 16 ALLOT 1 TIME 26 (of 150) ]
[ time 264 ] Run JOB 1 at PRIORITY 0 [ TICKS 15 ALLOT 1 TIME 25 (of 150) ]
[ time 265 ] Run JOB 1 at PRIORITY 0 [ TICKS 14 ALLOT 1 TIME 24 (of 150) ]
[ time 266 ] Run JOB 1 at PRIORITY 0 [ TICKS 13 ALLOT 1 TIME 23 (of 150) ]
[ time 267 ] Run JOB 1 at PRIORITY 0 [ TICKS 12 ALLOT 1 TIME 22 (of 150) ]
[ time 268 ] Run JOB 1 at PRIORITY 0 [ TICKS 11 ALLOT 1 TIME 21 (of 150) ]
[ time 269 ] Run JOB 1 at PRIORITY 0 [ TICKS 10 ALLOT 1 TIME 20 (of 150) ]
[ time 270 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 150) ]
[ time 271 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 150) ]
[ time 272 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 150) ]
[ time 273 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 150) ]
[ time 274 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 150) ]
[ time 275 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 150) ]
[ time 276 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 150) ]
[ time 277 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 150) ]
[ time 278 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 150) ]
[ time 279 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 150) ]
[ time 280 ] Run JOB 0 at PRIORITY 0 [ TICKS 39 ALLOT 2 TIME 9 (of 150) ]
[ time 281 ] Run JOB 0 at PRIORITY 0 [ TICKS 38 ALLOT 2 TIME 8 (of 150) ]
[ time 282 ] Run JOB 0 at PRIORITY 0 [ TICKS 37 ALLOT 2 TIME 7 (of 150) ]
[ time 283 ] Run JOB 0 at PRIORITY 0 [ TICKS 36 ALLOT 2 TIME 6 (of 150) ]
[ time 284 ] Run JOB 0 at PRIORITY 0 [ TICKS 35 ALLOT 2 TIME 5 (of 150) ]
[ time 285 ] Run JOB 0 at PRIORITY 0 [ TICKS 34 ALLOT 2 TIME 4 (of 150) ]
[ time 286 ] Run JOB 0 at PRIORITY 0 [ TICKS 33 ALLOT 2 TIME 3 (of 150) ]
[ time 287 ] Run JOB 0 at PRIORITY 0 [ TICKS 32 ALLOT 2 TIME 2 (of 150) ]
[ time 288 ] Run JOB 0 at PRIORITY 0 [ TICKS 31 ALLOT 2 TIME 1 (of 150) ]
[ time 289 ] Run JOB 0 at PRIORITY 0 [ TICKS 30 ALLOT 2 TIME 0 (of 150) ]
[ time 290 ] FINISHED JOB 0
[ time 290 ] Run JOB 1 at PRIORITY 0 [ TICKS 39 ALLOT 2 TIME 9 (of 150) ]
[ time 291 ] Run JOB 1 at PRIORITY 0 [ TICKS 38 ALLOT 2 TIME 8 (of 150) ]
[ time 292 ] Run JOB 1 at PRIORITY 0 [ TICKS 37 ALLOT 2 TIME 7 (of 150) ]
[ time 293 ] Run JOB 1 at PRIORITY 0 [ TICKS 36 ALLOT 2 TIME 6 (of 150) ]
[ time 294 ] Run JOB 1 at PRIORITY 0 [ TICKS 35 ALLOT 2 TIME 5 (of 150) ]
[ time 295 ] Run JOB 1 at PRIORITY 0 [ TICKS 34 ALLOT 2 TIME 4 (of 150) ]
[ time 296 ] Run JOB 1 at PRIORITY 0 [ TICKS 33 ALLOT 2 TIME 3 (of 150) ]
[ time 297 ] Run JOB 1 at PRIORITY 0 [ TICKS 32 ALLOT 2 TIME 2 (of 150) ]
[ time 298 ] Run JOB 1 at PRIORITY 0 [ TICKS 31 ALLOT 2 TIME 1 (of 150) ]
[ time 299 ] Run JOB 1 at PRIORITY 0 [ TICKS 30 ALLOT 2 TIME 0 (of 150) ]
[ time 300 ] FINISHED JOB 1

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 290
  Job  1: startTime   0 - response  10 - turnaround 300

  Avg  1: startTime n/a - response 5.00 - turnaround 295.00
```
___
# Question 3
How would you configure the scheduler parameters to behave just
like a round-robin scheduler?
___
I would use one queue with fixed quantum.
## Input
```console
./mlfq.py --jlist=0,40,0:0,40,0 -n 1 -q 10 -s 0 -c
```
## Output
```console
Here is the list of inputs:
OPTIONS jobs 2
OPTIONS queues 1
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
  Job  0: startTime   0 - runTime  40 - ioFreq   0
  Job  1: startTime   0 - runTime  40 - ioFreq   0


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 40) ]
[ time 1 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 40) ]
[ time 2 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 40) ]
[ time 3 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 40) ]
[ time 4 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 40) ]
[ time 5 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 40) ]
[ time 6 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 40) ]
[ time 7 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 40) ]
[ time 8 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 40) ]
[ time 9 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 40) ]
[ time 10 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 39 (of 40) ]
[ time 11 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 38 (of 40) ]
[ time 12 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 37 (of 40) ]
[ time 13 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 36 (of 40) ]
[ time 14 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 35 (of 40) ]
[ time 15 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 34 (of 40) ]
[ time 16 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 33 (of 40) ]
[ time 17 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 32 (of 40) ]
[ time 18 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 31 (of 40) ]
[ time 19 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 30 (of 40) ]
[ time 20 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 40) ]
[ time 21 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 40) ]
[ time 22 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 40) ]
[ time 23 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 40) ]
[ time 24 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 40) ]
[ time 25 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 40) ]
[ time 26 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 40) ]
[ time 27 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 40) ]
[ time 28 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 40) ]
[ time 29 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 40) ]
[ time 30 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 29 (of 40) ]
[ time 31 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 28 (of 40) ]
[ time 32 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 27 (of 40) ]
[ time 33 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 26 (of 40) ]
[ time 34 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 25 (of 40) ]
[ time 35 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 24 (of 40) ]
[ time 36 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 23 (of 40) ]
[ time 37 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 22 (of 40) ]
[ time 38 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 21 (of 40) ]
[ time 39 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 20 (of 40) ]
[ time 40 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 40) ]
[ time 41 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 40) ]
[ time 42 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 40) ]
[ time 43 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 40) ]
[ time 44 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 40) ]
[ time 45 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 40) ]
[ time 46 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 40) ]
[ time 47 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 40) ]
[ time 48 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 40) ]
[ time 49 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 40) ]
[ time 50 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 19 (of 40) ]
[ time 51 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 18 (of 40) ]
[ time 52 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 17 (of 40) ]
[ time 53 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 16 (of 40) ]
[ time 54 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 15 (of 40) ]
[ time 55 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 14 (of 40) ]
[ time 56 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 13 (of 40) ]
[ time 57 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 12 (of 40) ]
[ time 58 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 11 (of 40) ]
[ time 59 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 10 (of 40) ]
[ time 60 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 40) ]
[ time 61 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 40) ]
[ time 62 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 40) ]
[ time 63 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 40) ]
[ time 64 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 40) ]
[ time 65 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 40) ]
[ time 66 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 40) ]
[ time 67 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 40) ]
[ time 68 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 40) ]
[ time 69 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 40) ]
[ time 70 ] FINISHED JOB 0
[ time 70 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 9 (of 40) ]
[ time 71 ] Run JOB 1 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 8 (of 40) ]
[ time 72 ] Run JOB 1 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 7 (of 40) ]
[ time 73 ] Run JOB 1 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 6 (of 40) ]
[ time 74 ] Run JOB 1 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 5 (of 40) ]
[ time 75 ] Run JOB 1 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 4 (of 40) ]
[ time 76 ] Run JOB 1 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 3 (of 40) ]
[ time 77 ] Run JOB 1 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 2 (of 40) ]
[ time 78 ] Run JOB 1 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 1 (of 40) ]
[ time 79 ] Run JOB 1 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 0 (of 40) ]
[ time 80 ] FINISHED JOB 1

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround  70
  Job  1: startTime   0 - response  10 - turnaround  80

  Avg  1: startTime n/a - response 5.00 - turnaround 75.00
```
___
# Question 4
Craft a workload with two jobs and scheduler parameters so that
one job takes advantage of the older Rules 4a and 4b (turned on
with the -S flag) to game the scheduler and obtain 99% of the CPU
over a particular time interval.
___
See Example from Figure 8.6 in Question 2
___
# Question 5
Given a system with a quantum length of 10 ms in its highest queue,
how often would you have to boost jobs back to the highest priority
level (with the -B flag) in order to guarantee that a single long-
running (and potentially-starving) job gets at least 5% of the CPU?
___
After every boost, a starved process would run for 10 ms.  To ensure it runs at least 5% of the time.  It must be boosted every (10 ms) * 20 = 200 ms.

## Input
```console
./mlfq.py --jlist=0,200,0:0,100,1:0,100,1 -n 2 -q 10 -S -i 1 -B 200 -s 0 -c
```
## Output
```console
Here is the list of inputs:
OPTIONS jobs 3
OPTIONS queues 2
OPTIONS allotments for queue  1 is   1
OPTIONS quantum length for queue  1 is  10
OPTIONS allotments for queue  0 is   1
OPTIONS quantum length for queue  0 is  10
OPTIONS boost 200
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
  Job  1: startTime   0 - runTime 100 - ioFreq   1
  Job  2: startTime   0 - runTime 100 - ioFreq   1


Execution Trace:

[ time 0 ] JOB BEGINS by JOB 0
[ time 0 ] JOB BEGINS by JOB 1
[ time 0 ] JOB BEGINS by JOB 2
[ time 0 ] Run JOB 0 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 199 (of 200) ]
[ time 1 ] Run JOB 0 at PRIORITY 1 [ TICKS 8 ALLOT 1 TIME 198 (of 200) ]
[ time 2 ] Run JOB 0 at PRIORITY 1 [ TICKS 7 ALLOT 1 TIME 197 (of 200) ]
[ time 3 ] Run JOB 0 at PRIORITY 1 [ TICKS 6 ALLOT 1 TIME 196 (of 200) ]
[ time 4 ] Run JOB 0 at PRIORITY 1 [ TICKS 5 ALLOT 1 TIME 195 (of 200) ]
[ time 5 ] Run JOB 0 at PRIORITY 1 [ TICKS 4 ALLOT 1 TIME 194 (of 200) ]
[ time 6 ] Run JOB 0 at PRIORITY 1 [ TICKS 3 ALLOT 1 TIME 193 (of 200) ]
[ time 7 ] Run JOB 0 at PRIORITY 1 [ TICKS 2 ALLOT 1 TIME 192 (of 200) ]
[ time 8 ] Run JOB 0 at PRIORITY 1 [ TICKS 1 ALLOT 1 TIME 191 (of 200) ]
[ time 9 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 190 (of 200) ]
[ time 10 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 99 (of 100) ]
[ time 11 ] IO_START by JOB 1
IO DONE
[ time 11 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 99 (of 100) ]
[ time 12 ] IO_START by JOB 2
IO DONE
[ time 12 ] IO_DONE by JOB 1
[ time 12 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 98 (of 100) ]
[ time 13 ] IO_START by JOB 1
IO DONE
[ time 13 ] IO_DONE by JOB 2
[ time 13 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 98 (of 100) ]
[ time 14 ] IO_START by JOB 2
IO DONE
[ time 14 ] IO_DONE by JOB 1
[ time 14 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 97 (of 100) ]
[ time 15 ] IO_START by JOB 1
IO DONE
[ time 15 ] IO_DONE by JOB 2
[ time 15 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 97 (of 100) ]
[ time 16 ] IO_START by JOB 2
IO DONE
[ time 16 ] IO_DONE by JOB 1
[ time 16 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 96 (of 100) ]
[ time 17 ] IO_START by JOB 1
IO DONE
[ time 17 ] IO_DONE by JOB 2
[ time 17 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 96 (of 100) ]
[ time 18 ] IO_START by JOB 2
IO DONE
[ time 18 ] IO_DONE by JOB 1
[ time 18 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 95 (of 100) ]
[ time 19 ] IO_START by JOB 1
IO DONE
[ time 19 ] IO_DONE by JOB 2
[ time 19 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 95 (of 100) ]
[ time 20 ] IO_START by JOB 2
IO DONE
[ time 20 ] IO_DONE by JOB 1
[ time 20 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 94 (of 100) ]
[ time 21 ] IO_START by JOB 1
IO DONE
[ time 21 ] IO_DONE by JOB 2
[ time 21 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 94 (of 100) ]
[ time 22 ] IO_START by JOB 2
IO DONE
[ time 22 ] IO_DONE by JOB 1
[ time 22 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 93 (of 100) ]
[ time 23 ] IO_START by JOB 1
IO DONE
[ time 23 ] IO_DONE by JOB 2
[ time 23 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 93 (of 100) ]
[ time 24 ] IO_START by JOB 2
IO DONE
[ time 24 ] IO_DONE by JOB 1
[ time 24 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 92 (of 100) ]
[ time 25 ] IO_START by JOB 1
IO DONE
[ time 25 ] IO_DONE by JOB 2
[ time 25 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 92 (of 100) ]
[ time 26 ] IO_START by JOB 2
IO DONE
[ time 26 ] IO_DONE by JOB 1
[ time 26 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 91 (of 100) ]
[ time 27 ] IO_START by JOB 1
IO DONE
[ time 27 ] IO_DONE by JOB 2
[ time 27 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 91 (of 100) ]
[ time 28 ] IO_START by JOB 2
IO DONE
[ time 28 ] IO_DONE by JOB 1
[ time 28 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 90 (of 100) ]
[ time 29 ] IO_START by JOB 1
IO DONE
[ time 29 ] IO_DONE by JOB 2
[ time 29 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 90 (of 100) ]
[ time 30 ] IO_START by JOB 2
IO DONE
[ time 30 ] IO_DONE by JOB 1
[ time 30 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 89 (of 100) ]
[ time 31 ] IO_START by JOB 1
IO DONE
[ time 31 ] IO_DONE by JOB 2
[ time 31 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 89 (of 100) ]
[ time 32 ] IO_START by JOB 2
IO DONE
[ time 32 ] IO_DONE by JOB 1
[ time 32 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 88 (of 100) ]
[ time 33 ] IO_START by JOB 1
IO DONE
[ time 33 ] IO_DONE by JOB 2
[ time 33 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 88 (of 100) ]
[ time 34 ] IO_START by JOB 2
IO DONE
[ time 34 ] IO_DONE by JOB 1
[ time 34 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 87 (of 100) ]
[ time 35 ] IO_START by JOB 1
IO DONE
[ time 35 ] IO_DONE by JOB 2
[ time 35 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 87 (of 100) ]
[ time 36 ] IO_START by JOB 2
IO DONE
[ time 36 ] IO_DONE by JOB 1
[ time 36 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 86 (of 100) ]
[ time 37 ] IO_START by JOB 1
IO DONE
[ time 37 ] IO_DONE by JOB 2
[ time 37 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 86 (of 100) ]
[ time 38 ] IO_START by JOB 2
IO DONE
[ time 38 ] IO_DONE by JOB 1
[ time 38 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 85 (of 100) ]
[ time 39 ] IO_START by JOB 1
IO DONE
[ time 39 ] IO_DONE by JOB 2
[ time 39 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 85 (of 100) ]
[ time 40 ] IO_START by JOB 2
IO DONE
[ time 40 ] IO_DONE by JOB 1
[ time 40 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 84 (of 100) ]
[ time 41 ] IO_START by JOB 1
IO DONE
[ time 41 ] IO_DONE by JOB 2
[ time 41 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 84 (of 100) ]
[ time 42 ] IO_START by JOB 2
IO DONE
[ time 42 ] IO_DONE by JOB 1
[ time 42 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 83 (of 100) ]
[ time 43 ] IO_START by JOB 1
IO DONE
[ time 43 ] IO_DONE by JOB 2
[ time 43 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 83 (of 100) ]
[ time 44 ] IO_START by JOB 2
IO DONE
[ time 44 ] IO_DONE by JOB 1
[ time 44 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 82 (of 100) ]
[ time 45 ] IO_START by JOB 1
IO DONE
[ time 45 ] IO_DONE by JOB 2
[ time 45 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 82 (of 100) ]
[ time 46 ] IO_START by JOB 2
IO DONE
[ time 46 ] IO_DONE by JOB 1
[ time 46 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 81 (of 100) ]
[ time 47 ] IO_START by JOB 1
IO DONE
[ time 47 ] IO_DONE by JOB 2
[ time 47 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 81 (of 100) ]
[ time 48 ] IO_START by JOB 2
IO DONE
[ time 48 ] IO_DONE by JOB 1
[ time 48 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 80 (of 100) ]
[ time 49 ] IO_START by JOB 1
IO DONE
[ time 49 ] IO_DONE by JOB 2
[ time 49 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 80 (of 100) ]
[ time 50 ] IO_START by JOB 2
IO DONE
[ time 50 ] IO_DONE by JOB 1
[ time 50 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 79 (of 100) ]
[ time 51 ] IO_START by JOB 1
IO DONE
[ time 51 ] IO_DONE by JOB 2
[ time 51 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 79 (of 100) ]
[ time 52 ] IO_START by JOB 2
IO DONE
[ time 52 ] IO_DONE by JOB 1
[ time 52 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 78 (of 100) ]
[ time 53 ] IO_START by JOB 1
IO DONE
[ time 53 ] IO_DONE by JOB 2
[ time 53 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 78 (of 100) ]
[ time 54 ] IO_START by JOB 2
IO DONE
[ time 54 ] IO_DONE by JOB 1
[ time 54 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 77 (of 100) ]
[ time 55 ] IO_START by JOB 1
IO DONE
[ time 55 ] IO_DONE by JOB 2
[ time 55 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 77 (of 100) ]
[ time 56 ] IO_START by JOB 2
IO DONE
[ time 56 ] IO_DONE by JOB 1
[ time 56 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 76 (of 100) ]
[ time 57 ] IO_START by JOB 1
IO DONE
[ time 57 ] IO_DONE by JOB 2
[ time 57 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 76 (of 100) ]
[ time 58 ] IO_START by JOB 2
IO DONE
[ time 58 ] IO_DONE by JOB 1
[ time 58 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 75 (of 100) ]
[ time 59 ] IO_START by JOB 1
IO DONE
[ time 59 ] IO_DONE by JOB 2
[ time 59 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 75 (of 100) ]
[ time 60 ] IO_START by JOB 2
IO DONE
[ time 60 ] IO_DONE by JOB 1
[ time 60 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 74 (of 100) ]
[ time 61 ] IO_START by JOB 1
IO DONE
[ time 61 ] IO_DONE by JOB 2
[ time 61 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 74 (of 100) ]
[ time 62 ] IO_START by JOB 2
IO DONE
[ time 62 ] IO_DONE by JOB 1
[ time 62 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 73 (of 100) ]
[ time 63 ] IO_START by JOB 1
IO DONE
[ time 63 ] IO_DONE by JOB 2
[ time 63 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 73 (of 100) ]
[ time 64 ] IO_START by JOB 2
IO DONE
[ time 64 ] IO_DONE by JOB 1
[ time 64 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 72 (of 100) ]
[ time 65 ] IO_START by JOB 1
IO DONE
[ time 65 ] IO_DONE by JOB 2
[ time 65 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 72 (of 100) ]
[ time 66 ] IO_START by JOB 2
IO DONE
[ time 66 ] IO_DONE by JOB 1
[ time 66 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 71 (of 100) ]
[ time 67 ] IO_START by JOB 1
IO DONE
[ time 67 ] IO_DONE by JOB 2
[ time 67 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 71 (of 100) ]
[ time 68 ] IO_START by JOB 2
IO DONE
[ time 68 ] IO_DONE by JOB 1
[ time 68 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 70 (of 100) ]
[ time 69 ] IO_START by JOB 1
IO DONE
[ time 69 ] IO_DONE by JOB 2
[ time 69 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 70 (of 100) ]
[ time 70 ] IO_START by JOB 2
IO DONE
[ time 70 ] IO_DONE by JOB 1
[ time 70 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 69 (of 100) ]
[ time 71 ] IO_START by JOB 1
IO DONE
[ time 71 ] IO_DONE by JOB 2
[ time 71 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 69 (of 100) ]
[ time 72 ] IO_START by JOB 2
IO DONE
[ time 72 ] IO_DONE by JOB 1
[ time 72 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 68 (of 100) ]
[ time 73 ] IO_START by JOB 1
IO DONE
[ time 73 ] IO_DONE by JOB 2
[ time 73 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 68 (of 100) ]
[ time 74 ] IO_START by JOB 2
IO DONE
[ time 74 ] IO_DONE by JOB 1
[ time 74 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 67 (of 100) ]
[ time 75 ] IO_START by JOB 1
IO DONE
[ time 75 ] IO_DONE by JOB 2
[ time 75 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 67 (of 100) ]
[ time 76 ] IO_START by JOB 2
IO DONE
[ time 76 ] IO_DONE by JOB 1
[ time 76 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 66 (of 100) ]
[ time 77 ] IO_START by JOB 1
IO DONE
[ time 77 ] IO_DONE by JOB 2
[ time 77 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 66 (of 100) ]
[ time 78 ] IO_START by JOB 2
IO DONE
[ time 78 ] IO_DONE by JOB 1
[ time 78 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 65 (of 100) ]
[ time 79 ] IO_START by JOB 1
IO DONE
[ time 79 ] IO_DONE by JOB 2
[ time 79 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 65 (of 100) ]
[ time 80 ] IO_START by JOB 2
IO DONE
[ time 80 ] IO_DONE by JOB 1
[ time 80 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 64 (of 100) ]
[ time 81 ] IO_START by JOB 1
IO DONE
[ time 81 ] IO_DONE by JOB 2
[ time 81 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 64 (of 100) ]
[ time 82 ] IO_START by JOB 2
IO DONE
[ time 82 ] IO_DONE by JOB 1
[ time 82 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 63 (of 100) ]
[ time 83 ] IO_START by JOB 1
IO DONE
[ time 83 ] IO_DONE by JOB 2
[ time 83 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 63 (of 100) ]
[ time 84 ] IO_START by JOB 2
IO DONE
[ time 84 ] IO_DONE by JOB 1
[ time 84 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 62 (of 100) ]
[ time 85 ] IO_START by JOB 1
IO DONE
[ time 85 ] IO_DONE by JOB 2
[ time 85 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 62 (of 100) ]
[ time 86 ] IO_START by JOB 2
IO DONE
[ time 86 ] IO_DONE by JOB 1
[ time 86 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 61 (of 100) ]
[ time 87 ] IO_START by JOB 1
IO DONE
[ time 87 ] IO_DONE by JOB 2
[ time 87 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 61 (of 100) ]
[ time 88 ] IO_START by JOB 2
IO DONE
[ time 88 ] IO_DONE by JOB 1
[ time 88 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 60 (of 100) ]
[ time 89 ] IO_START by JOB 1
IO DONE
[ time 89 ] IO_DONE by JOB 2
[ time 89 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 60 (of 100) ]
[ time 90 ] IO_START by JOB 2
IO DONE
[ time 90 ] IO_DONE by JOB 1
[ time 90 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 59 (of 100) ]
[ time 91 ] IO_START by JOB 1
IO DONE
[ time 91 ] IO_DONE by JOB 2
[ time 91 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 59 (of 100) ]
[ time 92 ] IO_START by JOB 2
IO DONE
[ time 92 ] IO_DONE by JOB 1
[ time 92 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 58 (of 100) ]
[ time 93 ] IO_START by JOB 1
IO DONE
[ time 93 ] IO_DONE by JOB 2
[ time 93 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 58 (of 100) ]
[ time 94 ] IO_START by JOB 2
IO DONE
[ time 94 ] IO_DONE by JOB 1
[ time 94 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 57 (of 100) ]
[ time 95 ] IO_START by JOB 1
IO DONE
[ time 95 ] IO_DONE by JOB 2
[ time 95 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 57 (of 100) ]
[ time 96 ] IO_START by JOB 2
IO DONE
[ time 96 ] IO_DONE by JOB 1
[ time 96 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 56 (of 100) ]
[ time 97 ] IO_START by JOB 1
IO DONE
[ time 97 ] IO_DONE by JOB 2
[ time 97 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 56 (of 100) ]
[ time 98 ] IO_START by JOB 2
IO DONE
[ time 98 ] IO_DONE by JOB 1
[ time 98 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 55 (of 100) ]
[ time 99 ] IO_START by JOB 1
IO DONE
[ time 99 ] IO_DONE by JOB 2
[ time 99 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 55 (of 100) ]
[ time 100 ] IO_START by JOB 2
IO DONE
[ time 100 ] IO_DONE by JOB 1
[ time 100 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 54 (of 100) ]
[ time 101 ] IO_START by JOB 1
IO DONE
[ time 101 ] IO_DONE by JOB 2
[ time 101 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 54 (of 100) ]
[ time 102 ] IO_START by JOB 2
IO DONE
[ time 102 ] IO_DONE by JOB 1
[ time 102 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 53 (of 100) ]
[ time 103 ] IO_START by JOB 1
IO DONE
[ time 103 ] IO_DONE by JOB 2
[ time 103 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 53 (of 100) ]
[ time 104 ] IO_START by JOB 2
IO DONE
[ time 104 ] IO_DONE by JOB 1
[ time 104 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 52 (of 100) ]
[ time 105 ] IO_START by JOB 1
IO DONE
[ time 105 ] IO_DONE by JOB 2
[ time 105 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 52 (of 100) ]
[ time 106 ] IO_START by JOB 2
IO DONE
[ time 106 ] IO_DONE by JOB 1
[ time 106 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 51 (of 100) ]
[ time 107 ] IO_START by JOB 1
IO DONE
[ time 107 ] IO_DONE by JOB 2
[ time 107 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 51 (of 100) ]
[ time 108 ] IO_START by JOB 2
IO DONE
[ time 108 ] IO_DONE by JOB 1
[ time 108 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 50 (of 100) ]
[ time 109 ] IO_START by JOB 1
IO DONE
[ time 109 ] IO_DONE by JOB 2
[ time 109 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 50 (of 100) ]
[ time 110 ] IO_START by JOB 2
IO DONE
[ time 110 ] IO_DONE by JOB 1
[ time 110 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 49 (of 100) ]
[ time 111 ] IO_START by JOB 1
IO DONE
[ time 111 ] IO_DONE by JOB 2
[ time 111 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 49 (of 100) ]
[ time 112 ] IO_START by JOB 2
IO DONE
[ time 112 ] IO_DONE by JOB 1
[ time 112 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 48 (of 100) ]
[ time 113 ] IO_START by JOB 1
IO DONE
[ time 113 ] IO_DONE by JOB 2
[ time 113 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 48 (of 100) ]
[ time 114 ] IO_START by JOB 2
IO DONE
[ time 114 ] IO_DONE by JOB 1
[ time 114 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 47 (of 100) ]
[ time 115 ] IO_START by JOB 1
IO DONE
[ time 115 ] IO_DONE by JOB 2
[ time 115 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 47 (of 100) ]
[ time 116 ] IO_START by JOB 2
IO DONE
[ time 116 ] IO_DONE by JOB 1
[ time 116 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 46 (of 100) ]
[ time 117 ] IO_START by JOB 1
IO DONE
[ time 117 ] IO_DONE by JOB 2
[ time 117 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 46 (of 100) ]
[ time 118 ] IO_START by JOB 2
IO DONE
[ time 118 ] IO_DONE by JOB 1
[ time 118 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 45 (of 100) ]
[ time 119 ] IO_START by JOB 1
IO DONE
[ time 119 ] IO_DONE by JOB 2
[ time 119 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 45 (of 100) ]
[ time 120 ] IO_START by JOB 2
IO DONE
[ time 120 ] IO_DONE by JOB 1
[ time 120 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 44 (of 100) ]
[ time 121 ] IO_START by JOB 1
IO DONE
[ time 121 ] IO_DONE by JOB 2
[ time 121 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 44 (of 100) ]
[ time 122 ] IO_START by JOB 2
IO DONE
[ time 122 ] IO_DONE by JOB 1
[ time 122 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 43 (of 100) ]
[ time 123 ] IO_START by JOB 1
IO DONE
[ time 123 ] IO_DONE by JOB 2
[ time 123 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 43 (of 100) ]
[ time 124 ] IO_START by JOB 2
IO DONE
[ time 124 ] IO_DONE by JOB 1
[ time 124 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 42 (of 100) ]
[ time 125 ] IO_START by JOB 1
IO DONE
[ time 125 ] IO_DONE by JOB 2
[ time 125 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 42 (of 100) ]
[ time 126 ] IO_START by JOB 2
IO DONE
[ time 126 ] IO_DONE by JOB 1
[ time 126 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 41 (of 100) ]
[ time 127 ] IO_START by JOB 1
IO DONE
[ time 127 ] IO_DONE by JOB 2
[ time 127 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 41 (of 100) ]
[ time 128 ] IO_START by JOB 2
IO DONE
[ time 128 ] IO_DONE by JOB 1
[ time 128 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 40 (of 100) ]
[ time 129 ] IO_START by JOB 1
IO DONE
[ time 129 ] IO_DONE by JOB 2
[ time 129 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 40 (of 100) ]
[ time 130 ] IO_START by JOB 2
IO DONE
[ time 130 ] IO_DONE by JOB 1
[ time 130 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 39 (of 100) ]
[ time 131 ] IO_START by JOB 1
IO DONE
[ time 131 ] IO_DONE by JOB 2
[ time 131 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 39 (of 100) ]
[ time 132 ] IO_START by JOB 2
IO DONE
[ time 132 ] IO_DONE by JOB 1
[ time 132 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 38 (of 100) ]
[ time 133 ] IO_START by JOB 1
IO DONE
[ time 133 ] IO_DONE by JOB 2
[ time 133 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 38 (of 100) ]
[ time 134 ] IO_START by JOB 2
IO DONE
[ time 134 ] IO_DONE by JOB 1
[ time 134 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 37 (of 100) ]
[ time 135 ] IO_START by JOB 1
IO DONE
[ time 135 ] IO_DONE by JOB 2
[ time 135 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 37 (of 100) ]
[ time 136 ] IO_START by JOB 2
IO DONE
[ time 136 ] IO_DONE by JOB 1
[ time 136 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 36 (of 100) ]
[ time 137 ] IO_START by JOB 1
IO DONE
[ time 137 ] IO_DONE by JOB 2
[ time 137 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 36 (of 100) ]
[ time 138 ] IO_START by JOB 2
IO DONE
[ time 138 ] IO_DONE by JOB 1
[ time 138 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 35 (of 100) ]
[ time 139 ] IO_START by JOB 1
IO DONE
[ time 139 ] IO_DONE by JOB 2
[ time 139 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 35 (of 100) ]
[ time 140 ] IO_START by JOB 2
IO DONE
[ time 140 ] IO_DONE by JOB 1
[ time 140 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 34 (of 100) ]
[ time 141 ] IO_START by JOB 1
IO DONE
[ time 141 ] IO_DONE by JOB 2
[ time 141 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 34 (of 100) ]
[ time 142 ] IO_START by JOB 2
IO DONE
[ time 142 ] IO_DONE by JOB 1
[ time 142 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 33 (of 100) ]
[ time 143 ] IO_START by JOB 1
IO DONE
[ time 143 ] IO_DONE by JOB 2
[ time 143 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 33 (of 100) ]
[ time 144 ] IO_START by JOB 2
IO DONE
[ time 144 ] IO_DONE by JOB 1
[ time 144 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 32 (of 100) ]
[ time 145 ] IO_START by JOB 1
IO DONE
[ time 145 ] IO_DONE by JOB 2
[ time 145 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 32 (of 100) ]
[ time 146 ] IO_START by JOB 2
IO DONE
[ time 146 ] IO_DONE by JOB 1
[ time 146 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 31 (of 100) ]
[ time 147 ] IO_START by JOB 1
IO DONE
[ time 147 ] IO_DONE by JOB 2
[ time 147 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 31 (of 100) ]
[ time 148 ] IO_START by JOB 2
IO DONE
[ time 148 ] IO_DONE by JOB 1
[ time 148 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 30 (of 100) ]
[ time 149 ] IO_START by JOB 1
IO DONE
[ time 149 ] IO_DONE by JOB 2
[ time 149 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 30 (of 100) ]
[ time 150 ] IO_START by JOB 2
IO DONE
[ time 150 ] IO_DONE by JOB 1
[ time 150 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 29 (of 100) ]
[ time 151 ] IO_START by JOB 1
IO DONE
[ time 151 ] IO_DONE by JOB 2
[ time 151 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 29 (of 100) ]
[ time 152 ] IO_START by JOB 2
IO DONE
[ time 152 ] IO_DONE by JOB 1
[ time 152 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 28 (of 100) ]
[ time 153 ] IO_START by JOB 1
IO DONE
[ time 153 ] IO_DONE by JOB 2
[ time 153 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 28 (of 100) ]
[ time 154 ] IO_START by JOB 2
IO DONE
[ time 154 ] IO_DONE by JOB 1
[ time 154 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 27 (of 100) ]
[ time 155 ] IO_START by JOB 1
IO DONE
[ time 155 ] IO_DONE by JOB 2
[ time 155 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 27 (of 100) ]
[ time 156 ] IO_START by JOB 2
IO DONE
[ time 156 ] IO_DONE by JOB 1
[ time 156 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 26 (of 100) ]
[ time 157 ] IO_START by JOB 1
IO DONE
[ time 157 ] IO_DONE by JOB 2
[ time 157 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 26 (of 100) ]
[ time 158 ] IO_START by JOB 2
IO DONE
[ time 158 ] IO_DONE by JOB 1
[ time 158 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 25 (of 100) ]
[ time 159 ] IO_START by JOB 1
IO DONE
[ time 159 ] IO_DONE by JOB 2
[ time 159 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 25 (of 100) ]
[ time 160 ] IO_START by JOB 2
IO DONE
[ time 160 ] IO_DONE by JOB 1
[ time 160 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 24 (of 100) ]
[ time 161 ] IO_START by JOB 1
IO DONE
[ time 161 ] IO_DONE by JOB 2
[ time 161 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 24 (of 100) ]
[ time 162 ] IO_START by JOB 2
IO DONE
[ time 162 ] IO_DONE by JOB 1
[ time 162 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 23 (of 100) ]
[ time 163 ] IO_START by JOB 1
IO DONE
[ time 163 ] IO_DONE by JOB 2
[ time 163 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 23 (of 100) ]
[ time 164 ] IO_START by JOB 2
IO DONE
[ time 164 ] IO_DONE by JOB 1
[ time 164 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 22 (of 100) ]
[ time 165 ] IO_START by JOB 1
IO DONE
[ time 165 ] IO_DONE by JOB 2
[ time 165 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 22 (of 100) ]
[ time 166 ] IO_START by JOB 2
IO DONE
[ time 166 ] IO_DONE by JOB 1
[ time 166 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 21 (of 100) ]
[ time 167 ] IO_START by JOB 1
IO DONE
[ time 167 ] IO_DONE by JOB 2
[ time 167 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 21 (of 100) ]
[ time 168 ] IO_START by JOB 2
IO DONE
[ time 168 ] IO_DONE by JOB 1
[ time 168 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 20 (of 100) ]
[ time 169 ] IO_START by JOB 1
IO DONE
[ time 169 ] IO_DONE by JOB 2
[ time 169 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 20 (of 100) ]
[ time 170 ] IO_START by JOB 2
IO DONE
[ time 170 ] IO_DONE by JOB 1
[ time 170 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 19 (of 100) ]
[ time 171 ] IO_START by JOB 1
IO DONE
[ time 171 ] IO_DONE by JOB 2
[ time 171 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 19 (of 100) ]
[ time 172 ] IO_START by JOB 2
IO DONE
[ time 172 ] IO_DONE by JOB 1
[ time 172 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 18 (of 100) ]
[ time 173 ] IO_START by JOB 1
IO DONE
[ time 173 ] IO_DONE by JOB 2
[ time 173 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 18 (of 100) ]
[ time 174 ] IO_START by JOB 2
IO DONE
[ time 174 ] IO_DONE by JOB 1
[ time 174 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 17 (of 100) ]
[ time 175 ] IO_START by JOB 1
IO DONE
[ time 175 ] IO_DONE by JOB 2
[ time 175 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 17 (of 100) ]
[ time 176 ] IO_START by JOB 2
IO DONE
[ time 176 ] IO_DONE by JOB 1
[ time 176 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 16 (of 100) ]
[ time 177 ] IO_START by JOB 1
IO DONE
[ time 177 ] IO_DONE by JOB 2
[ time 177 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 16 (of 100) ]
[ time 178 ] IO_START by JOB 2
IO DONE
[ time 178 ] IO_DONE by JOB 1
[ time 178 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 15 (of 100) ]
[ time 179 ] IO_START by JOB 1
IO DONE
[ time 179 ] IO_DONE by JOB 2
[ time 179 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 15 (of 100) ]
[ time 180 ] IO_START by JOB 2
IO DONE
[ time 180 ] IO_DONE by JOB 1
[ time 180 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 14 (of 100) ]
[ time 181 ] IO_START by JOB 1
IO DONE
[ time 181 ] IO_DONE by JOB 2
[ time 181 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 14 (of 100) ]
[ time 182 ] IO_START by JOB 2
IO DONE
[ time 182 ] IO_DONE by JOB 1
[ time 182 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 13 (of 100) ]
[ time 183 ] IO_START by JOB 1
IO DONE
[ time 183 ] IO_DONE by JOB 2
[ time 183 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 13 (of 100) ]
[ time 184 ] IO_START by JOB 2
IO DONE
[ time 184 ] IO_DONE by JOB 1
[ time 184 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 12 (of 100) ]
[ time 185 ] IO_START by JOB 1
IO DONE
[ time 185 ] IO_DONE by JOB 2
[ time 185 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 12 (of 100) ]
[ time 186 ] IO_START by JOB 2
IO DONE
[ time 186 ] IO_DONE by JOB 1
[ time 186 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 11 (of 100) ]
[ time 187 ] IO_START by JOB 1
IO DONE
[ time 187 ] IO_DONE by JOB 2
[ time 187 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 11 (of 100) ]
[ time 188 ] IO_START by JOB 2
IO DONE
[ time 188 ] IO_DONE by JOB 1
[ time 188 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 10 (of 100) ]
[ time 189 ] IO_START by JOB 1
IO DONE
[ time 189 ] IO_DONE by JOB 2
[ time 189 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 10 (of 100) ]
[ time 190 ] IO_START by JOB 2
IO DONE
[ time 190 ] IO_DONE by JOB 1
[ time 190 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 9 (of 100) ]
[ time 191 ] IO_START by JOB 1
IO DONE
[ time 191 ] IO_DONE by JOB 2
[ time 191 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 9 (of 100) ]
[ time 192 ] IO_START by JOB 2
IO DONE
[ time 192 ] IO_DONE by JOB 1
[ time 192 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 8 (of 100) ]
[ time 193 ] IO_START by JOB 1
IO DONE
[ time 193 ] IO_DONE by JOB 2
[ time 193 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 8 (of 100) ]
[ time 194 ] IO_START by JOB 2
IO DONE
[ time 194 ] IO_DONE by JOB 1
[ time 194 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 7 (of 100) ]
[ time 195 ] IO_START by JOB 1
IO DONE
[ time 195 ] IO_DONE by JOB 2
[ time 195 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 7 (of 100) ]
[ time 196 ] IO_START by JOB 2
IO DONE
[ time 196 ] IO_DONE by JOB 1
[ time 196 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 6 (of 100) ]
[ time 197 ] IO_START by JOB 1
IO DONE
[ time 197 ] IO_DONE by JOB 2
[ time 197 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 6 (of 100) ]
[ time 198 ] IO_START by JOB 2
IO DONE
[ time 198 ] IO_DONE by JOB 1
[ time 198 ] Run JOB 1 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 5 (of 100) ]
[ time 199 ] IO_START by JOB 1
IO DONE
[ time 199 ] IO_DONE by JOB 2
[ time 199 ] Run JOB 2 at PRIORITY 1 [ TICKS 9 ALLOT 1 TIME 5 (of 100) ]
[ time 200 ] IO_START by JOB 2
IO DONE
[ time 200 ] BOOST ( every 200 )
[ time 200 ] IO_DONE by JOB 1
[ time 200 ] Run JOB 0 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 189 (of 200) ]
[ time 201 ] IO_DONE by JOB 2
[ time 201 ] Run JOB 1 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 4 (of 100) ]
[ time 202 ] IO_START by JOB 1
IO DONE
[ time 202 ] Run JOB 2 at PRIORITY 1 [ TICKS 0 ALLOT 1 TIME 4 (of 100) ]
[ time 203 ] IO_START by JOB 2
IO DONE
[ time 203 ] IO_DONE by JOB 1
[ time 203 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 188 (of 200) ]
[ time 204 ] IO_DONE by JOB 2
[ time 204 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 187 (of 200) ]
[ time 205 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 186 (of 200) ]
[ time 206 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 185 (of 200) ]
[ time 207 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 184 (of 200) ]
[ time 208 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 183 (of 200) ]
[ time 209 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 182 (of 200) ]
[ time 210 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 181 (of 200) ]
[ time 211 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 180 (of 200) ]
[ time 212 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 179 (of 200) ]
[ time 213 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 3 (of 100) ]
[ time 214 ] IO_START by JOB 1
IO DONE
[ time 214 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 3 (of 100) ]
[ time 215 ] IO_START by JOB 2
IO DONE
[ time 215 ] IO_DONE by JOB 1
[ time 215 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 178 (of 200) ]
[ time 216 ] IO_DONE by JOB 2
[ time 216 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 177 (of 200) ]
[ time 217 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 176 (of 200) ]
[ time 218 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 175 (of 200) ]
[ time 219 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 174 (of 200) ]
[ time 220 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 173 (of 200) ]
[ time 221 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 172 (of 200) ]
[ time 222 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 171 (of 200) ]
[ time 223 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 170 (of 200) ]
[ time 224 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 169 (of 200) ]
[ time 225 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 2 (of 100) ]
[ time 226 ] IO_START by JOB 1
IO DONE
[ time 226 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 2 (of 100) ]
[ time 227 ] IO_START by JOB 2
IO DONE
[ time 227 ] IO_DONE by JOB 1
[ time 227 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 168 (of 200) ]
[ time 228 ] IO_DONE by JOB 2
[ time 228 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 167 (of 200) ]
[ time 229 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 166 (of 200) ]
[ time 230 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 165 (of 200) ]
[ time 231 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 164 (of 200) ]
[ time 232 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 163 (of 200) ]
[ time 233 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 162 (of 200) ]
[ time 234 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 161 (of 200) ]
[ time 235 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 160 (of 200) ]
[ time 236 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 159 (of 200) ]
[ time 237 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 1 (of 100) ]
[ time 238 ] IO_START by JOB 1
IO DONE
[ time 238 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 1 (of 100) ]
[ time 239 ] IO_START by JOB 2
IO DONE
[ time 239 ] IO_DONE by JOB 1
[ time 239 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 158 (of 200) ]
[ time 240 ] IO_DONE by JOB 2
[ time 240 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 157 (of 200) ]
[ time 241 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 156 (of 200) ]
[ time 242 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 155 (of 200) ]
[ time 243 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 154 (of 200) ]
[ time 244 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 153 (of 200) ]
[ time 245 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 152 (of 200) ]
[ time 246 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 151 (of 200) ]
[ time 247 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 150 (of 200) ]
[ time 248 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 149 (of 200) ]
[ time 249 ] Run JOB 1 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 0 (of 100) ]
[ time 250 ] FINISHED JOB 1
[ time 250 ] Run JOB 2 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 0 (of 100) ]
[ time 251 ] FINISHED JOB 2
[ time 251 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 148 (of 200) ]
[ time 252 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 147 (of 200) ]
[ time 253 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 146 (of 200) ]
[ time 254 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 145 (of 200) ]
[ time 255 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 144 (of 200) ]
[ time 256 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 143 (of 200) ]
[ time 257 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 142 (of 200) ]
[ time 258 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 141 (of 200) ]
[ time 259 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 140 (of 200) ]
[ time 260 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 139 (of 200) ]
[ time 261 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 138 (of 200) ]
[ time 262 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 137 (of 200) ]
[ time 263 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 136 (of 200) ]
[ time 264 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 135 (of 200) ]
[ time 265 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 134 (of 200) ]
[ time 266 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 133 (of 200) ]
[ time 267 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 132 (of 200) ]
[ time 268 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 131 (of 200) ]
[ time 269 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 130 (of 200) ]
[ time 270 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 129 (of 200) ]
[ time 271 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 128 (of 200) ]
[ time 272 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 127 (of 200) ]
[ time 273 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 126 (of 200) ]
[ time 274 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 125 (of 200) ]
[ time 275 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 124 (of 200) ]
[ time 276 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 123 (of 200) ]
[ time 277 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 122 (of 200) ]
[ time 278 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 121 (of 200) ]
[ time 279 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 120 (of 200) ]
[ time 280 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 119 (of 200) ]
[ time 281 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 118 (of 200) ]
[ time 282 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 117 (of 200) ]
[ time 283 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 116 (of 200) ]
[ time 284 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 115 (of 200) ]
[ time 285 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 114 (of 200) ]
[ time 286 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 113 (of 200) ]
[ time 287 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 112 (of 200) ]
[ time 288 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 111 (of 200) ]
[ time 289 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 110 (of 200) ]
[ time 290 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 109 (of 200) ]
[ time 291 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 108 (of 200) ]
[ time 292 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 107 (of 200) ]
[ time 293 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 106 (of 200) ]
[ time 294 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 105 (of 200) ]
[ time 295 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 104 (of 200) ]
[ time 296 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 103 (of 200) ]
[ time 297 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 102 (of 200) ]
[ time 298 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 101 (of 200) ]
[ time 299 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 100 (of 200) ]
[ time 300 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 99 (of 200) ]
[ time 301 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 98 (of 200) ]
[ time 302 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 97 (of 200) ]
[ time 303 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 96 (of 200) ]
[ time 304 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 95 (of 200) ]
[ time 305 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 94 (of 200) ]
[ time 306 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 93 (of 200) ]
[ time 307 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 92 (of 200) ]
[ time 308 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 91 (of 200) ]
[ time 309 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 90 (of 200) ]
[ time 310 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 89 (of 200) ]
[ time 311 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 88 (of 200) ]
[ time 312 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 87 (of 200) ]
[ time 313 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 86 (of 200) ]
[ time 314 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 85 (of 200) ]
[ time 315 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 84 (of 200) ]
[ time 316 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 83 (of 200) ]
[ time 317 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 82 (of 200) ]
[ time 318 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 81 (of 200) ]
[ time 319 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 80 (of 200) ]
[ time 320 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 79 (of 200) ]
[ time 321 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 78 (of 200) ]
[ time 322 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 77 (of 200) ]
[ time 323 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 76 (of 200) ]
[ time 324 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 75 (of 200) ]
[ time 325 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 74 (of 200) ]
[ time 326 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 73 (of 200) ]
[ time 327 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 72 (of 200) ]
[ time 328 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 71 (of 200) ]
[ time 329 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 70 (of 200) ]
[ time 330 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 69 (of 200) ]
[ time 331 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 68 (of 200) ]
[ time 332 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 67 (of 200) ]
[ time 333 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 66 (of 200) ]
[ time 334 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 65 (of 200) ]
[ time 335 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 64 (of 200) ]
[ time 336 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 63 (of 200) ]
[ time 337 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 62 (of 200) ]
[ time 338 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 61 (of 200) ]
[ time 339 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 60 (of 200) ]
[ time 340 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 59 (of 200) ]
[ time 341 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 58 (of 200) ]
[ time 342 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 57 (of 200) ]
[ time 343 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 56 (of 200) ]
[ time 344 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 55 (of 200) ]
[ time 345 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 54 (of 200) ]
[ time 346 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 53 (of 200) ]
[ time 347 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 52 (of 200) ]
[ time 348 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 51 (of 200) ]
[ time 349 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 50 (of 200) ]
[ time 350 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 49 (of 200) ]
[ time 351 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 48 (of 200) ]
[ time 352 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 47 (of 200) ]
[ time 353 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 46 (of 200) ]
[ time 354 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 45 (of 200) ]
[ time 355 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 44 (of 200) ]
[ time 356 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 43 (of 200) ]
[ time 357 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 42 (of 200) ]
[ time 358 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 41 (of 200) ]
[ time 359 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 40 (of 200) ]
[ time 360 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 39 (of 200) ]
[ time 361 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 38 (of 200) ]
[ time 362 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 37 (of 200) ]
[ time 363 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 36 (of 200) ]
[ time 364 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 35 (of 200) ]
[ time 365 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 34 (of 200) ]
[ time 366 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 33 (of 200) ]
[ time 367 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 32 (of 200) ]
[ time 368 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 31 (of 200) ]
[ time 369 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 30 (of 200) ]
[ time 370 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 29 (of 200) ]
[ time 371 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 28 (of 200) ]
[ time 372 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 27 (of 200) ]
[ time 373 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 26 (of 200) ]
[ time 374 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 25 (of 200) ]
[ time 375 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 24 (of 200) ]
[ time 376 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 23 (of 200) ]
[ time 377 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 22 (of 200) ]
[ time 378 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 21 (of 200) ]
[ time 379 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 20 (of 200) ]
[ time 380 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 19 (of 200) ]
[ time 381 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 18 (of 200) ]
[ time 382 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 17 (of 200) ]
[ time 383 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 16 (of 200) ]
[ time 384 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 15 (of 200) ]
[ time 385 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 14 (of 200) ]
[ time 386 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 13 (of 200) ]
[ time 387 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 12 (of 200) ]
[ time 388 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 11 (of 200) ]
[ time 389 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 10 (of 200) ]
[ time 390 ] Run JOB 0 at PRIORITY 0 [ TICKS 0 ALLOT 1 TIME 9 (of 200) ]
[ time 391 ] Run JOB 0 at PRIORITY 0 [ TICKS 9 ALLOT 1 TIME 8 (of 200) ]
[ time 392 ] Run JOB 0 at PRIORITY 0 [ TICKS 8 ALLOT 1 TIME 7 (of 200) ]
[ time 393 ] Run JOB 0 at PRIORITY 0 [ TICKS 7 ALLOT 1 TIME 6 (of 200) ]
[ time 394 ] Run JOB 0 at PRIORITY 0 [ TICKS 6 ALLOT 1 TIME 5 (of 200) ]
[ time 395 ] Run JOB 0 at PRIORITY 0 [ TICKS 5 ALLOT 1 TIME 4 (of 200) ]
[ time 396 ] Run JOB 0 at PRIORITY 0 [ TICKS 4 ALLOT 1 TIME 3 (of 200) ]
[ time 397 ] Run JOB 0 at PRIORITY 0 [ TICKS 3 ALLOT 1 TIME 2 (of 200) ]
[ time 398 ] Run JOB 0 at PRIORITY 0 [ TICKS 2 ALLOT 1 TIME 1 (of 200) ]
[ time 399 ] Run JOB 0 at PRIORITY 0 [ TICKS 1 ALLOT 1 TIME 0 (of 200) ]
[ time 400 ] FINISHED JOB 0

Final statistics:
  Job  0: startTime   0 - response   0 - turnaround 400
  Job  1: startTime   0 - response  10 - turnaround 250
  Job  2: startTime   0 - response  11 - turnaround 251

  Avg  2: startTime n/a - response 7.00 - turnaround 300.33
```
___
# Question 6
One question that arises in scheduling is which end of a queue to
add a job that just finished I/O; the -I flag changes this behavior
for this scheduling simulator. Play around with some workloads
and see if you can see the effect of this flag.
___
Enabling the flag makes iobump True.  The effect of this is that jobs are pulled to the front of the line when their IO ends.  This may have the effect of making the system feel more responsive, as a job continues running as soon as possible over IO, but the downside is it may steal time from another process that would have finished execution had the iobump flag been False.

## Input
```console
./mlfq.py --jlist=0,50,4:0,50,4:0,50,4 -n 3 -i 5 -s 0 -c
```