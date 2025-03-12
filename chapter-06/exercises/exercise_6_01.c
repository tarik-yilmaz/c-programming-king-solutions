/*
 * Chapter 6, Exercise 1 – Doubling Sequence
 * -----------------------------------------
 * This program fragment demonstrates a while loop that prints a series of numbers
 * by repeatedly doubling the value of `i` until it exceeds 128.
 *
 * Process:
 * --------
 *  - The loop starts with `i = 1`.
 *  - In each iteration, the current value of `i` is printed (without spaces or newlines),
 *    and then `i` is doubled.
 *
 * Iteration Breakdown:
 * --------------------
 * 1. i = 1   → prints "1", then i becomes 2.
 * 2. i = 2   → prints "2", then i becomes 4.
 * 3. i = 4   → prints "4", then i becomes 8.
 * 4. i = 8   → prints "8", then i becomes 16.
 * 5. i = 16  → prints "16", then i becomes 32.
 * 6. i = 32  → prints "32", then i becomes 64.
 * 7. i = 64  → prints "64", then i becomes 128.
 * 8. i = 128 → prints "128", then i becomes 256.
 * 9. i = 256 → condition fails (256 > 128), loop exits.
 *
 * Final Output:
 * -------------
 * The program prints: 1248163264128
 *
 * Note:
 * -----
 * - The numbers are printed consecutively without any spaces or newlines.
 */

 #include <stdio.h>

 int main(void) {
     int i = 1;
     while (i <= 128) {
         printf("%d", i);
         i *= 2;
     }
     return 0;
 }
 