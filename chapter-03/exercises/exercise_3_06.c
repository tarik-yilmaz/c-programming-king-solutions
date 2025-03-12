/*
 * Chapter 3, Exercise 6 – Handling Spaces in Fraction Input
 * ----------------------------------------------------------
 * This program modifies the `addfrac.c` program to allow users 
 * to enter fractions with spaces before and after the `/` character.
 *
 * Modification:
 *  - The original scanf pattern `%d/%d` only accepts input without spaces around `/`.
 *  - Updating the pattern to `%d / %d` allows whitespace before and after `/`.
 *
 * Example Inputs:
 * ---------------
 *  - "1/2"  ✅ Valid
 *  - "1 / 2" ✅ Valid
 *  - "  1   /   2  " ✅ Valid
 *
 * Example Output:
 * ---------------
 * Enter first fraction: 1 / 2
 * Enter second fraction: 3 / 4
 * The sum is 10/8
 */

 #include <stdio.h>

 int main(void) {
     int num1, denom1, num2, denom2, result_num, result_denom;
 
     // Modified to accept spaces around '/'
     printf("Enter first fraction: ");
     scanf("%d / %d", &num1, &denom1);
 
     printf("Enter second fraction: ");
     scanf("%d / %d", &num2, &denom2);
 
     // Compute fraction sum
     result_num = num1 * denom2 + num2 * denom1;
     result_denom = denom1 * denom2;
 
     // Output result
     printf("The sum is %d/%d\n", result_num, result_denom);
 
     return 0;
 }
 