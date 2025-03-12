/*
 * Chapter 6, Exercise 2 – Do-While Loop Output
 * --------------------------------------------
 * This program fragment demonstrates a do-while loop that repeatedly prints
 * the current value of an integer `i` and then divides `i` by 10 until `i` becomes 0.
 *
 * Process:
 * --------
 *  - The loop starts with `i = 9384`.
 *  - In each iteration, the current value of `i` is printed (without spaces or newlines),
 *    then `i` is reduced by dividing it by 10.
 *  - The loop terminates when `i` becomes 0.
 *
 * Iteration Breakdown:
 * --------------------
 * 1. i = 9384:  Print "9384";  then i becomes 938.
 * 2. i = 938:   Print "938";   then i becomes 93.
 * 3. i = 93:    Print "93";    then i becomes 9.
 * 4. i = 9:     Print "9";     then i becomes 0.
 * 5. i = 0:     Loop exits since i > 0 is false.
 *
 * Final Output:
 * -------------
 * The program prints: 93849393
 *
 * Note:
 * -----
 * - The numbers "9384", "938", "93", and "9" are printed consecutively without any spaces.
 */

 #include <stdio.h>

 int main(void) {
     int i = 9384;
     do {
         printf("%d", i);
         i /= 10;
     } while (i > 0);
     return 0;
 }
 