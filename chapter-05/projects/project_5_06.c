/*
 * Chapter 5, Project 6 – UPC Validator
 * -------------------------------------
 * This program modifies the upc.c program from Section 4.1 to **validate** a UPC.
 *
 * Instead of simply calculating the check digit, the program now:
 *  - Prompts the user to enter a UPC in three parts:
 *      • The first (single) digit.
 *      • The first group of five digits.
 *      • The second group of five digits.
 *  - Calculates the check digit using the UPC check digit algorithm.
 *  - Compares the calculated check digit with the last digit entered (from the second group).
 *  - Displays "VALID" if the check digit matches, and "NOT VALID" otherwise.
 *
 * UPC Check Digit Algorithm:
 * ----------------------------
 * 1. Sum the digits in the even-numbered positions (starting with the first digit of the UPC).
 * 2. Sum the digits in the odd-numbered positions.
 * 3. Multiply the even-position sum by 3 and add the odd-position sum.
 * 4. The check digit is calculated as: 9 - ((total - 1) % 10)
 *
 * Example Run:
 * ------------
 *  Enter the first (single) digit: 0
 *  Enter first group of five digits: 13800
 *  Enter second group of five digits: 15173
 *  Check digit is: 3
 *  VALID
 */

 #include <stdio.h>

 int main(void) {
 
     // Variables to store individual digits of the UPC
     int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
     int first_sum, second_sum, total, check_digit; // Variables for intermediate calculations and the check digit
 
     // Prompt the user to enter the first (single) digit of the UPC
     printf("Enter the first (single) digit: ");
     scanf("%1d", &d);
 
     // Prompt the user to enter the first group of five digits
     printf("Enter first group of five digits: ");
     scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
 
     // Prompt the user to enter the second group of five digits
     printf("Enter second group of five digits: ");
     scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
 
     // Calculate the sum of digits in odd positions (starting from the first digit)
     first_sum = d + i2 + i4 + j1 + j3 + j5;
 
     // Calculate the sum of digits in even positions
     second_sum = i1 + i3 + i5 + j2 + j4;
 
     // Compute the total sum as per the UPC check digit algorithm
     total = 3 * first_sum + second_sum;
 
     // Calculate the check digit
     check_digit = 9 - ((total - 1) % 10);
 
     // Validate the UPC by comparing the calculated check digit with the last digit (j5)
     if (check_digit == j5) {
         printf("Check digit is: %d\nVALID\n", check_digit);
     } else {
         printf("Check digit is: %d\nNOT VALID\n", check_digit);
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input:
 //   Enter the first (single) digit: 0
 //   Enter first group of five digits: 13800
 //   Enter second group of five digits: 15173
 // Output:
 //   Check digit is: 3
 //   VALID
 */
 