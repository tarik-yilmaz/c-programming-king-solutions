/*
 * Chapter 9, Exercise 5 – Counting Digits of an Integer
 * -----------------------------------------------------
 * Implement a function `num_digits(n)` that calculates the number of digits
 * in a given positive integer `n`. The function uses repeated division by 10
 * to determine how many digits `n` contains.
 *
 * Edge Cases Considered:
 * -----------------------
 * - If `n = 0`, it should return `1` (since 0 has 1 digit).
 * - If `n` is negative, it is converted to positive before processing.
 *
 * Example Runs:
 * -------------
 * Enter a positive integer: 12345
 * Output: The number 12345 has 5 digits!
 *
 * Enter a positive integer: 0
 * Output: The number 0 has 1 digit!
 *
 * Corrected Function:
 * -------------------
 */

 #include <stdio.h>

 // Function to count the number of digits in a given integer
 int num_digits(int n) {
     if (n == 0) return 1;  // Special case for 0
 
     int count = 0;
 
     // Convert negative numbers to positive
     if (n < 0) {
         n = -n;
     }
 
     while (n > 0) {
         n /= 10;
         count++;
     }
     
     return count;
 }
 
 int main() {
     int num;
 
     // Prompt user for input
     printf("Enter a positive integer: ");
     scanf("%d", &num);
 
     // Compute and print the number of digits
     printf("The number %d has %d digits!\n", num, num_digits(num));
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - The function repeatedly divides `n` by 10, incrementing `count` until `n` reaches 0.
  * - If `n` is 0, the function returns `1` (since 0 is a single-digit number).
  * - If `n` is negative, it is converted to positive before counting digits.
  *
  * Expected Output:
  * ----------------
  * Enter a positive integer: 67890
  * The number 67890 has 5 digits!
  *
  * Enter a positive integer: 0
  * The number 0 has 1 digit!
  *
  * Now, the function correctly computes the number of digits for all valid inputs.
  */
 