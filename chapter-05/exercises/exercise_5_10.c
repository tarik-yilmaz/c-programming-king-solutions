/*
 * Chapter 5, Exercise 10 – Switch Statement Fall-Through
 * -------------------------------------------------------
 * This program fragment demonstrates the behavior of a switch statement
 * when `break` statements are omitted.
 *
 * Code Fragment:
 * --------------
 *   i = 1;
 *   switch (i % 3) {
 *       case 0: printf("zero");
 *       case 1: printf("one");
 *       case 2: printf("two");
 *   }
 *
 * Explanation:
 * ------------
 * - `i % 3` computes the remainder of `i` divided by 3.
 *   For `i = 1`, `1 % 3` equals `1`.
 *
 * - The switch statement finds the matching case:
 *   - It skips `case 0` and matches `case 1`, then prints "one".
 *   - Because there is no `break`, execution falls through to `case 2`, printing "two".
 *
 * Final Output:
 * -------------
 * "onetwo"
 *
 * Key Point:
 * ----------
 * - **Fall-through** occurs when there are no `break` statements,
 *   causing subsequent cases to execute regardless of their match.
 * - To avoid fall-through, include a `break` after each case.
 *
 * Corrected Example:
 * ------------------
 *   switch (i % 3) {
 *       case 0: printf("zero"); break;
 *       case 1: printf("one"); break;
 *       case 2: printf("two"); break;
 *   }
 *
 * Final Answer:
 * -------------
 * The program prints: "onetwo"
 */

 #include <stdio.h>

 int main(void) {
     int i;
     
     // Set i to 1
     i = 1;
     
     // Switch statement without break statements
     switch (i % 3) {
         case 0: printf("zero");
         case 1: printf("one");
         case 2: printf("two");
     }
     
     return 0; // End of program
 }
 