/*
 * Chapter 6, Exercise 14 – Fixing an if Statement Error
 * -----------------------------------------------------
 * The following program fragment contains an error:
 *
 *   if (n % 2 == 0) ;
 *       printf("n is even\n");
 *
 * Error:
 * ------
 * - The semicolon (`;`) after the `if` statement terminates the conditional
 *   block immediately, causing the subsequent printf statement to execute 
 *   regardless of the condition.
 *
 * Fixed Code:
 * -----------
 *   if (n % 2 == 0)
 *       printf("n is even\n");
 *
 * Explanation:
 * ------------
 * - Removing the semicolon ensures that the printf statement is controlled by the
 *   if statement, and it will only execute when n is even.
 *
 * Example:
 * --------
 * - If n = 4, then n % 2 == 0 is true, and "n is even" is printed.
 * - If n = 5, then n % 2 == 0 is false, and nothing is printed.
 */

 #include <stdio.h>

 int main(void) {
     int n;
     
     // Prompt user to enter a number
     printf("Enter a number: ");
     scanf("%d", &n);
     
     // Fixed if statement: prints only if n is even
     if (n % 2 == 0)
         printf("n is even\n");
     
     return 0;
 }
 