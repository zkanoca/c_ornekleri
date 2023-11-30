/*
This program generates random grades for each student of which  number is given
 by the user. 

Using a seed value input, the program generates grades. It, then, calculates 
various statistics including the minimum, average, median and maximum, and 
average grades, and displays these statistics in the specified format along 
with a histogram representation of grade distribution.

The bubble sort algorithm was used in order to sort the grades array since it 
is easy to use and successful for the small lists as in this program (100 
elements). Reference: https://en.wikipedia.org/wiki/Bubble_sort

Author: zkanoca
Date: 11/30/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENT_COUNT 100
#define BUCKET 10      // 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
#define NUM_BUCKETS 11 // graeds 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
#define NUM_QUESTIONS 35

// get seed and student count input from the user
void getUserInput(int *seed, int *studentCount);
// generate random grades, sort and store them in the array
void generateGrades(int seed, int grades[], int studentCount);
// find maximum grade
int findMaximum(int grades[], int studentCount);
// find minimum grade
int findMinimum(int grades[], int studentCount);
// find median grade
double findMedian(int grades[], int studentCount);
// calculate average grade
double calculateAverage(int grades[], int studentCount);
// display histogram lines
void displayHistogram(int grades[], int studentCount);
// display minimum, average, median, maximum in the desired format
void displayStatistics(int mininum, double average, double median, int maximum);
// sort the array in ascending order using bubble sort algorithm to find the median value easily
void bubbleSort(int grades[], int studentCount);

int main()
{
    int seed;
    int studentCount;
    int grades[MAX_STUDENT_COUNT];
    int mininum;
    int maximum;
    double median;
    double average;

    // get seed and student count input from the user
    getUserInput(&seed, &studentCount);

    // generate random grades, sort and store them in the array
    generateGrades(seed, grades, studentCount);

    // find maximum grade, minimum grade, median grade, average grade
    maximum = findMaximum(grades, studentCount);
    mininum = findMinimum(grades, studentCount);
    median = findMedian(grades, studentCount);
    average = calculateAverage(grades, studentCount);

    // display minimum, average, median, maximum in the desired format
    displayStatistics(mininum, average, median, maximum);
    // display histogram lines
    displayHistogram(grades, studentCount);

    return 0;
}

void getUserInput(int *seed, int *studentCount)
{
    // asking user to enter proper seed count
    do
    {
        printf("Enter seed -> ");
        scanf("%d", seed);
        // if seed is not a positive number, ask user to enter a positive number again
        if (*seed <= 0)
        {
            printf("Error: seed must be positive\n\n");
        }
    } while (*seed <= 0);

    // asking user to enter proper student count
    do
    {
        printf("Enter number of students -> ");
        scanf("%d", studentCount);

        // if student count is not a positive number, ask user to enter a positive number again
        if (*studentCount <= 0)
        {
            printf("Error: need at least one student\n\n");
        }

        // if student count is greater than 100, ask user to enter a number again, less than 101
        if (*studentCount > MAX_STUDENT_COUNT)
        {
            printf("Error: no more than 100 students\n\n");
        }
    } while (*studentCount <= 0 || *studentCount > MAX_STUDENT_COUNT);
}

int findMaximum(int grades[], int studentCount)
{
    int maximum;
    // initally assume the first element is the biggest in the list
    maximum = grades[0];

    // traverse the array to find the biggest element
    for (int i = 1; i < studentCount; i++)
    {
        // if the current element is bigger than maximum, update maximum
        if (grades[i] > maximum)
        {
            maximum = grades[i];
        }
    }

    // when finished traversing the array, return the maximum
    return maximum;
}

int findMinimum(int grades[], int studentCount)
{
    int minimum;
    // initally assume the first element is the smallest in the list
    minimum = grades[0];
    int i;

    // traverse the array to find the smallest element
    for (i = 1; i < studentCount; i++)
    {
        // if the current element is smaller than minimum, update minimum
        if (grades[i] < minimum)
        {
            minimum = grades[i];
        }
    }
    return minimum;
}

double findMedian(int *grades, int studentCount)
{
    double median;
    // sort the array using bubble sort algorithm to find the median value easily
    bubbleSort(grades, studentCount);

    // if the number of students is even, the median is the average of the two middle elements
    if (studentCount % 2 == 0)
    {
        median = (grades[studentCount / 2] + grades[(studentCount - 1) / 2]) / 2;
    }
    // if the number of students is odd, the median is the middle element of the array
    else
    {
        median = grades[studentCount / 2];
    }

    return median;
}

double calculateAverage(int grades[], int studentCount)
{
    double average;
    int total = 0;
    // counter variabler
    int i;

    // sum all the grades
    for (i = 0; i < studentCount; i++)
    {
        total += grades[i];
    }

    // divide the sum by the number of students to get the average score
    average = total / studentCount;

    return average;
}

void generateGrades(int seed, int grades[], int studentCount)
{
    // prevent generating same random values at each run
    srand(seed);

    // generate random grades and store them in the array
    for (int i = 0; i < studentCount; ++i)
    {
        // generate random grades between 0 and 105
        //if we do not add +1 to the NUM_QUESTIONS we never get 35
        grades[i] = (rand() % (NUM_QUESTIONS + 1)) * 3;
        // printf("%d\t", grades[i]);
    }
}

void displayHistogram(int grades[], int studentCount)
{
    // counter variables
    int i;
    int j;
    // create buckets for each 10*i points and assign 0 to all elements
    int buckets[NUM_BUCKETS] = {
        0,
    };

    // for each student analyze the score and assign it to the appropriate bucket
    for (i = 0; i < studentCount; i++)
    {
        // 0-9
        if (grades[i] >= 0 && grades[i] < 10)
        {
            buckets[0]++;
        }
        // 10-19
        else if (grades[i] >= 10 && grades[i] < 20)
        {
            buckets[1]++;
        }
        // 20-29
        else if (grades[i] >= 20 && grades[i] < 30)
        {
            buckets[2]++;
        }
        // 30-39
        else if (grades[i] >= 30 && grades[i] < 40)
        {
            buckets[3]++;
        }
        // 40-49
        else if (grades[i] >= 40 && grades[i] < 50)
        {
            buckets[4]++;
        }
        // 50-59
        else if (grades[i] >= 50 && grades[i] < 60)
        {
            buckets[5]++;
        }
        // 60-69
        else if (grades[i] >= 60 && grades[i] < 70)
        {
            buckets[6]++;
        }
        // 70-79
        else if (grades[i] >= 70 && grades[i] < 80)
        {
            buckets[7]++;
        }
        // 80-89
        else if (grades[i] >= 80 && grades[i] < 90)
        {
            buckets[8]++;
        }
        // 90-99
        else if (grades[i] >= 90 && grades[i] < 100)
        {
            buckets[9]++;
        }
        // 100-105
        else if (grades[i] >= 100)
        {
            buckets[10]++;
        }
    }

    // start over and print the histogram of the array "buckets"
    for (i = 0; i < NUM_BUCKETS; i++)
    {
        // print the bucket
        printf("%3d: ", i * 10);

        // if there is at least one score in this range print its number
        if (buckets[i] > 0)
        {
            printf("(%3d)", buckets[i]);
        }

        // print the horizontal bar
        for (j = 0; j < buckets[i]; j++)
        {
            printf("_");
        }
        // next line for the next bucket
        printf("\n");
    }
}

void displayStatistics(int mininum, double average, double median, int maximum)
{
    // =-=-=-=-=-=-=-=-=-=-=-=-=
    // Minimum:                3
    // Average:               41
    // Median:                28
    // Maximum:              102
    // =-=-=-=-=-=-=-=-=-=-=-=-=

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Minimum:%17d\n", mininum);
    printf("Average:%17.0f\n", average);
    printf("Median:%18.0f\n", median);
    printf("Maximum:%17d\n", maximum);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

// Bubble Sort Function to sort array
void bubbleSort(int grades[], int studentCount)
{
    int i;
    int j;
    int temp;

    // Traverse through all array elements
    for (i = 0; i < studentCount - 1; i++)
    {
        // Last i elements are already in place
        for (j = 0; j < studentCount - i - 1; j++)
        {
            // if current grade is bigger than the next one, swap them
            if (grades[j] > grades[j + 1])
            {
                temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }
}
