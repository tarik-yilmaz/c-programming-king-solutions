/*
 * Chapter 6, Project 1 – Largest Number Finder
 * ---------------------------------------------
 * This program finds the largest number in a series of numbers entered by the user.
 *
 * Process:
 * --------
 * - The user is repeatedly prompted to enter a number.
 * - The loop continues until the user enters 0 or a negative number.
 * - The program tracks the largest nonnegative number entered.
 *
 * Input Example:
 * --------------
 *   Enter a number: 60
 *   Enter a number: 38.3
 *   Enter a number: 4.89
 *   Enter a number: 100.62
 *   Enter a number: 75.2295
 *   Enter a number: 0
 *
 * Output Example:
 * ---------------
 *   The largest number entered was 100.62
 *
 * Note:
 * -----
 * - The numbers are floating-point values (i.e., not necessarily integers).
 */

 #include <stdio.h>

 int main(void) {
 
     float num = 1, max = 0; // 'num' stores the user input (initialized to 1 to start the loop)
                             // 'max' tracks the largest number entered
 
     // Repeatedly prompt the user to enter a number until a nonpositive number is entered
     while (num > 0) {
 
         // Prompt the user for a number
         printf("Enter a number: ");
         scanf("%f", &num);
 
         // Update 'max' if the entered number is larger than the current 'max'
         if (max < num) {
             max = num;
         }   
     }
 
     // After the loop ends, print the largest number entered
     printf("The largest number entered was %.2f\n", max);
 
     return 0; // End of program
 }
 