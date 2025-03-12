/*
 * Chapter 6, Exercise 9 – While Loop Translation
 * -----------------------------------------------
 * This exercise translates the following for loop from Exercise 8 into an equivalent
 * while loop. The original for loop is:
 *
 *   for (i = 10; i >= 1; i /= 2)
 *       printf("%d ", i++);
 *
 * Translation:
 * -------------
 * - Move the initialization (i = 10) before the loop.
 * - Use the same condition (i >= 1) in the while statement.
 * - In the loop body, first print and post-increment i, then update i by dividing it by 2.
 *
 * The translated while loop performs the same operations and produces the same output.
 *
 * Example Output:
 * ---------------
 * 10 5 3 2 1
 */

 #include <stdio.h>

 int main(void) {
     int i; // Loop variable
 
     // Initialization (moved outside the loop)
     i = 10;
     
     // While loop with the same condition as the for loop
     while (i >= 1) {
         printf("%d ", i++); // Print current value and then increment i
         i /= 2;             // Divide i by 2 after printing
     }
 
     return 0;
 }
 