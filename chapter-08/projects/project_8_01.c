/*
 * Chapter 8, Project 1 – Repeated Digit Detector with Report
 * -----------------------------------------------------------
 * This program is a modification of the repdigit.c program from Section 8.1.
 * Instead of simply checking for a repeated digit, it records which digits (if any)
 * are repeated in the given number.
 *
 * Process:
 * --------
 * 1. The program reads a long integer from the user.
 * 2. It processes the number digit by digit (from rightmost to leftmost).
 * 3. Two boolean arrays are used:
 *      - digit_seen[10]: tracks whether a digit (0–9) has been encountered.
 *      - digit_repeated[10]: marks a digit as repeated if it is encountered again.
 * 4. After processing, the program prints all the digits that were repeated.
 * 5. If no digit is repeated, it prints "None".
 *
 * Example Run:
 * ------------
 *  Enter a number: 939577
 *  Repeated digit(s): 7 9
 */

 #include <stdbool.h>
 #include <stdio.h>
 
 int main(void) {
     bool digit_seen[10] = {false};      // Tracks which digits have been seen
     bool digit_repeated[10] = {false};    // Tracks which digits are repeated
     int digit;                          // The current digit extracted
     long n;                             // The number to be processed
 
     // Prompt the user to enter a number
     printf("Enter a number: ");
     scanf("%ld", &n);
 
     // Process each digit of the number
     while (n > 0) {
         digit = n % 10;  // Extract the last digit
         if (digit_seen[digit]) {
             digit_repeated[digit] = true;  // Mark digit as repeated if seen before
         }
         digit_seen[digit] = true;  // Mark digit as seen
         n /= 10;  // Remove the last digit
     }
 
     // Print the repeated digits
     printf("Repeated digit(s): ");
     bool found_repeated = false;
     for (int i = 0; i < 10; i++) {
         if (digit_repeated[i]) {
             printf("%d ", i);
             found_repeated = true;
         }
     }
     if (!found_repeated) {
         printf("None");
     }
     printf("\n");
 
     return 0;
 }
 