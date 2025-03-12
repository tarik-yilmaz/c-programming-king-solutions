/*
 * Chapter 3, Project 6 – Fraction Addition
 * -----------------------------------------
 * This program modifies the original `addfrac.c` program to allow the user 
 * to enter **two fractions at the same time**, separated by a plus sign (`+`).
 *
 * Input Format:
 * -------------
 *  - The user enters two fractions in the format: `a/b + c/d`
 *    - `a/b` is the first fraction.
 *    - `c/d` is the second fraction.
 *
 * Output Format:
 * --------------
 *  - The program computes the **sum of the two fractions** and displays 
 *    the result as an **unsimplified fraction** in the format `numerator/denominator`.
 *
 * Example Run:
 * ------------
 *  Enter two fractions separated by a plus sign: 5/6+3/4
 *  The sum is 38/24
 *
 * Notes:
 * ------
 *  - The program does **not simplify** the result.
 *  - Uses `scanf("%d/%d + %d/%d", ...)` to correctly extract both fractions.
 */

 #include <stdio.h>

 int main(void)
 {
     // Declare variables to store numerators and denominators of two fractions
     int num1, denom1, num2, denom2, result_num, result_denom;
 
     // Prompt the user to input two fractions separated by a plus sign
     printf("Enter two fractions separated by a plus sign: ");
     scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);
 
     // Calculate the numerator of the resulting fraction
     result_num = num1 * denom2 + num2 * denom1;
 
     // Calculate the denominator of the resulting fraction
     result_denom = denom1 * denom2;
 
     // Output the resulting fraction in the form numerator/denominator
     printf("The sum is %d/%d\n", result_num, result_denom);
 
     return 0; // End of program
 }
 