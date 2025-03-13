/*
 * Chapter 8, Exercise 7 – Shrinking the segments Array Initializer
 * ---------------------------------------------------------------
 * Using C's designated initializer shortcuts, we can shrink the initializer for the
 * segments array. When fewer than 7 elements are specified for a row, the remaining
 * elements are automatically initialized to 0.
 *
 * For example, for digits like 1 and 7, where many trailing segments are off (0),
 * we can list only the "on" segments.
 *
 * The following code demonstrates the shortened initializer for the seven-segment
 * display representation of digits 0 through 9:
 */

 #include <stdio.h>

 int main(void) {
     // Shrunk initializer for the segments array using default zero initialization
     const int segments[10][7] = {
         {1, 1, 1, 1, 1, 1, 0}, // 0: 1111110
         {0, 1, 1},             // 1: 0110000 (remaining 4 values default to 0)
         {1, 1, 0, 1, 1, 0, 1}, // 2: 1101101
         {1, 1, 1, 1, 0, 0, 1}, // 3: 1111001
         {0, 1, 1, 0, 0, 1, 1}, // 4: 0110011
         {1, 0, 1, 1, 0, 1, 1}, // 5: 1011011
         {1, 0, 1, 1, 1, 1, 1}, // 6: 1011111
         {1, 1, 1},             // 7: 1110000 (remaining 4 values default to 0)
         {1, 1, 1, 1, 1, 1, 1}, // 8: 1111111
         {1, 1, 1, 1, 0, 1, 1}  // 9: 1111011
     };
 
     // Print the segments array for verification
     printf("Seven-segment display representation of digits:\n");
     for (int digit = 0; digit < 10; digit++) {
         printf("Digit %d: ", digit);
         for (int segment = 0; segment < 7; segment++) {
             printf("%d", segments[digit][segment]);
         }
         printf("\n");
     }
 
     return 0;
 }
 
 /*
  * Explanation:
  * ------------
  * - In C, if an initializer does not specify all elements, the remaining elements
  *   are automatically initialized to 0.
  * - For digit 1, only the first three values are specified (0, 1, 1), so the rest
  *   default to 0, yielding "0110000".
  * - For digit 7, only the first three values are specified (1, 1, 1), with the remaining
  *   values defaulting to 0, yielding "1110000".
  *
  * Benefits:
  * ---------
  * - This approach shortens the initializer, making the code more concise and easier to maintain,
  *   without losing clarity.
  */
 