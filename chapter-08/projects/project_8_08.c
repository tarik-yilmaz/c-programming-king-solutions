/*
 * Chapter 8, Project 8 – Quiz Grades Analyzer
 * -------------------------------------------
 * This program prompts the user to enter five quiz grades for each of five students.
 * It then computes:
 *   1. For each student: the total score and average score.
 *   2. For each quiz: the average score, the high score, and the low score.
 *
 * Process:
 * --------
 *  - A 5x5 integer array is used to store the quiz grades for 5 students.
 *  - The program first reads the quiz grades for each student.
 *  - For each student (each row), the program computes the sum and average of the grades.
 *  - Then, for each quiz (each column), it computes the sum, average, highest, and lowest scores.
 *
 * Example Run:
 * ------------
 *  Input for each student might be:
 *      Student 1: 8 3 9 0 10
 *      Student 2: 3 5 17 1 1
 *      Student 3: 2 8 6 23 1
 *      Student 4: 15 7 3 2 9
 *      Student 5: 6 14 2 6 0
 *
 *  The program then displays:
 *      Total and average scores for each student.
 *      Average, high, and low scores for each quiz.
 */

 #include <stdio.h>

 int main(void) {
     int arr[5][5] = {0}; // 5 x 5 array to store quiz grades for 5 students
     int sum_row, sum_col, avg_score, avg_quiz;
     int max, min;
 
     // Input the quiz grades for each student
     for (int i = 0; i < 5; i++) {
         printf("Input quiz grades for student %d: ", i + 1);
         scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
     }
     printf("\n");
 
     // Calculate and print total and average scores for each student (row totals)
     printf("Total and average scores for each student:\n");
     for (int i = 0; i < 5; i++) {
         sum_row = 0; // Reset sum for the current row
         for (int j = 0; j < 5; j++) {
             sum_row += arr[i][j];
         }
         avg_score = sum_row / 5;
         printf("Student %d: Total = %d, Average = %d\n", i + 1, sum_row, avg_score);
     }
     printf("\n");
 
     // Calculate and print average, high, and low scores for each quiz (column totals)
     printf("Average, high, and low scores for each quiz:\n");
     for (int j = 0; j < 5; j++) {
         sum_col = 0; // Reset sum for the current column
         max = arr[0][j]; // Initialize max to the first student's grade for quiz j
         min = arr[0][j]; // Initialize min similarly
         for (int i = 0; i < 5; i++) {
             sum_col += arr[i][j];
             if (arr[i][j] > max) {
                 max = arr[i][j];
             }
             if (arr[i][j] < min) {
                 min = arr[i][j];
             }
         }
         avg_quiz = sum_col / 5;
         printf("Quiz %d: Average = %d, High = %d, Low = %d\n", j + 1, avg_quiz, max, min);
     }
     printf("\n");
 
     return 0;
 }
 