/*
 * Chapter 5, Project 10 – Grade Converter
 * ----------------------------------------
 * This program converts a numerical grade into a letter grade using a switch statement.
 *
 * Input:
 * -------------
 *  - The user is prompted to enter a numerical grade (an integer).
 *
 * Output:
 * --------------
 *  - The program displays the corresponding letter grade based on the following scale:
 *      A: 90 – 100
 *      B: 80 – 89
 *      C: 70 – 79
 *      D: 60 – 69
 *      F:  0 – 59
 *  - If the grade is not between 0 and 100, an error message is printed.
 *
 * Approach:
 * -------------
 *  - The grade is directly evaluated in a switch statement using **range cases** (a GNU extension).
 *  - Each case covers a range of grades.
 *  - The default case handles invalid grades (less than 0 or greater than 100).
 *
 * Example Run:
 * ------------
 *  Enter numerical grade: 84
 *  Letter grade: B
 *
 * Note:
 * -----
 * - Ensure you compile this program with a compiler that supports range cases (e.g., GCC).
 */

 #include <stdio.h>

 int main(void) {
     int grade; // Variable to store the numerical grade
 
     // Prompt the user to enter a numerical grade
     printf("Enter numerical grade: ");
     scanf("%d", &grade);
 
     // Use a switch statement to determine the letter grade based on the grading scale
     switch (grade) {
         // Grades between 0 and 59 correspond to an "F"
         case 0 ... 59:
             printf("Letter grade: F\n");
             break;
             
         // Grades between 60 and 69 correspond to a "D"
         case 60 ... 69:
             printf("Letter grade: D\n");
             break;
             
         // Grades between 70 and 79 correspond to a "C"
         case 70 ... 79:
             printf("Letter grade: C\n");
             break;
             
         // Grades between 80 and 89 correspond to a "B"
         case 80 ... 89:
             printf("Letter grade: B\n");
             break;
             
         // Grades between 90 and 100 correspond to an "A"
         case 90 ... 100:
             printf("Letter grade: A\n");
             break;
             
         // Handle invalid grades (outside the range of 0-100)
         default:
             printf("Please enter a numerical value between 0 and 100\n");
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input: 84      → Output: Letter grade: B
 // Input: 50      → Output: Letter grade: F
 // Input: 95      → Output: Letter grade: A
 // Input: -5 or 105 → Output: Please enter a numerical value between 0 and 100
 */
 