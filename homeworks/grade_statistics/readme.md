 
<p><b>Problem</b>: Given a positive seed and a number of students (between 1 and 100 inclusive), generate a number between 0<br>
and 35 inclusive for each student. This will represent the number of questions the student got correct on an exam.<br>
Multiply by 3 to calculate their exam score. Your program will then display the minimum, average, median, and<br>
maximum score along with a histogram of all scores. Use double precision when calculating the average and median.</p>
<h3>Example Execution #1:</h3>
<p>Enter seed -> 1</p>
<p>Enter number of students -> 10</p>
<p>=-=-=-=-=-=-=-=-=-=-=-=-=</p>
<p>Minimum: 3</p>
<p>Average: 41</p>
<p>Median: 28</p>
<p>Maximum: 102</p>
<p>=-=-=-=-=-=-=-=-=-=-=-=-=</p>
  0: ( 1) _
 10: ( 1) _
 20: ( 3) ___
 30: ( 2) __
 40:
 50: ( 1) _
 60:
 70:
 80:
 90: ( 1) _
100: ( 1) _
Random numbers generated:
19 34 9 7 5 7 10 12 33 1
Sorted exam scores:
3 15 21 21 27 30 36 57 99 102
The median is the "middle" score. For an even number of scores, take
the average of the two middle scores (in this case, 27 and 30). The
result is displayed to zero decimal places using printf.
The histogram is a graph of all scores placed into "buckets" of 10.
For example, score 3 is by itself in the [0, 9] bucket, while scores 30
and 36 are in the [30, 39] bucket. The lower bound of the bucket is
displayed before the colon; the number of scores (if any) is displayed
in parentheses following the colon. A single underscore character _ is
drawn for each score in that bucket.
Example Execution #2:
Enter seed -> 46
Enter number of students -> 100
=-=-=-=-=-=-=-=-=-=-=-=-=
Minimum: 0
Average: 59
Median: 64
Maximum: 105
=-=-=-=-=-=-=-=-=-=-=-=-=
 0: ( 4) ____
 10: ( 8) ________
 20: ( 15) _______________
 30: ( 4) ____
 40: ( 11) ___________
 50: ( 4) ____
 60: ( 14) ______________
 70: ( 8) ________
 80: ( 7) _______
 90: ( 21) _____________________
100: ( 4) ____
Example Execution #3:
Enter seed -> 4000
Enter number of students -> 1
=-=-=-=-=-=-=-=-=-=-=-=-=
Minimum: 81
Average: 81
Median: 81
Maximum: 81
=-=-=-=-=-=-=-=-=-=-=-=-=
 0:
 10:
 20:
 30:
 40:
 50:
 60:
 70:
 80: ( 1) _
 90:
100:
Academic Integrity Reminder: Please review the policies of the course as they relate to academic integrity.
• The assignment you submit should be
your own original work.
• Seek assistance from only course staff.
• Collaboration is never permitted on individual homework
assignments.
• Protect your work from being openly accessible on the Internet.
Example Execution #4: Input validation demonstrated.
Enter seed -> 0
Error: seed must be positive
Enter seed -> 79
Enter number of students -> 0
Error: need at least one student
Enter number of students -> 101
Error: no more than 100 students
Enter number of students -> 50
=-=-=-=-=-=-=-=-=-=-=-=-=
Minimum: 0
Average: 51
Median: 50
Maximum: 105
=-=-=-=-=-=-=-=-=-=-=-=-=
 0: ( 6) ______
 10: ( 3) ___
 20: ( 6) ______
 30: ( 4) ____
 40: ( 6) ______
 50: ( 5) _____
 60: ( 4) ____
 70: ( 4) ____
 80: ( 5) _____
 90: ( 5) _____
100: ( 2) __
Example Execution #6:
Enter seed -> 11
Enter number of students -> 99
=-=-=-=-=-=-=-=-=-=-=-=-=
Minimum: 0
Average: 53
Median: 54
Maximum: 105
=-=-=-=-=-=-=-=-=-=-=-=-=
 0: ( 14) ______________
 10: ( 10) __________
 20:
 30: ( 8) ________
 40: ( 14) ______________
 50: ( 11) ___________
 60: ( 11) ___________
 70: ( 8) ________
 80: ( 4) ____
 90: ( 9) _________
100: ( 10) __________
Example Execution #5:
Enter seed -> 5842
Enter number of students -> 76
=-=-=-=-=-=-=-=-=-=-=-=-=
Minimum: 12
Average: 60
Median: 58
Maximum: 105
=-=-=-=-=-=-=-=-=-=-=-=-=
 0:
 10: ( 10) __________
 20: ( 8) ________
 30: ( 8) ________
 40: ( 4) ____
 50: ( 8) ________
 60: ( 4) ____
 70: ( 7) _______
 80: ( 8) ________
 90: ( 11) ___________
100: ( 8) ________
Example Execution #7:
Enter seed -> 34
Enter number of students -> 21
=-=-=-=-=-=-=-=-=-=-=-=-=
Minimum: 6
Average: 44
Median: 45
Maximum: 84
=-=-=-=-=-=-=-=-=-=-=-=-=
 0: ( 3) ___
 10:
 20: ( 3) ___
 30: ( 2) __
 40: ( 3) ___
 50: ( 5) _____
 60: ( 2) __
 70: ( 1) _
 80: ( 2) __
 90:
100:
