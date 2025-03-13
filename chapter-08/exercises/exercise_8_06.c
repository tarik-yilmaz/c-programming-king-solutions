/*
 * Chapter 8, Exercise 6 – Seven-Segment Display Representation
 * --------------------------------------------------------------
 * This program sets up a 2D array named segments that represents the state of each of
 * the seven segments for the digits 0 through 9 in a seven-segment display.
 *
 * Segment Numbering:
 *       0__
 *   5 |    | 1
 *   4 |____| 2
 *       3
 *
 * Each row of the array corresponds to a digit (0-9), and each column (0-6) corresponds
 * to one of the seven segments. A value of 1 means the segment is "on," and 0 means it is "off."
 *
 * The first row is given; the remaining rows are filled to represent the correct pattern
 * for each digit:
 *
 * Digit 0: 1, 1, 1, 1, 1, 1, 0  → "1111110"
 * Digit 1: 0, 1, 1, 0, 0, 0, 0  → "0110000"
 * Digit 2: 1, 1, 0, 1, 1, 0, 1  → "1101101"
 * Digit 3: 1, 1, 1, 1, 0, 0, 1  → "1111001"
 * Digit 4: 0, 1, 1, 0, 0, 1, 1  → "0110011"
 * Digit 5: 1, 0, 1, 1, 0, 1, 1  → "1011011"
 * Digit 6: 1, 0, 1, 1, 1, 1, 1  → "1011111"
 * Digit 7: 1, 1, 1, 0, 0, 0, 0  → "1110000"
 * Digit 8: 1, 1, 1, 1, 1, 1, 1  → "1111111"
 * Digit 9: 1, 1, 1, 1, 0, 1, 1  → "1111011"
 *
 * The program prints the configuration of each digit for verification.
 */

 #include <stdio.h>

 int main(void) {
     const int segments[10][7] = {
         {1, 1, 1, 1, 1, 1, 0}, // 0
         {0, 1, 1, 0, 0, 0, 0}, // 1
         {1, 1, 0, 1, 1, 0, 1}, // 2
         {1, 1, 1, 1, 0, 0, 1}, // 3
         {0, 1, 1, 0, 0, 1, 1}, // 4
         {1, 0, 1, 1, 0, 1, 1}, // 5
         {1, 0, 1, 1, 1, 1, 1}, // 6
         {1, 1, 1, 0, 0, 0, 0}, // 7
         {1, 1, 1, 1, 1, 1, 1}, // 8
         {1, 1, 1, 1, 0, 1, 1}  // 9
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
 