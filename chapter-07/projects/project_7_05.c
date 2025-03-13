/*
 * Chapter 7, Project 5 – Scrabble Value Calculator
 * -------------------------------------------------
 * This program computes the Scrabble value of a word by summing the face values of its letters.
 *
 * Face Values:
 * -------------
 *   1 point: A, E, I, L, N, O, R, S, T, U
 *   2 points: D, G
 *   3 points: B, C, M, P
 *   4 points: F, H, V, W, Y
 *   5 points: K
 *   8 points: J, X
 *  10 points: Q, Z
 *
 * Process:
 * --------
 *  - The program reads a word entered by the user.
 *  - Each character is converted to uppercase using the toupper() function.
 *  - The corresponding face value is added to a running total.
 *  - Nonalphabetic characters are ignored.
 *
 * Example Run:
 * ------------
 *  Enter a word: pitfall
 *  Scrabble value: 12
 *
 * Note:
 * -----
 * - The program assumes that the user enters only valid characters.
 */

 #include <stdio.h>
 #include <ctype.h>
 
 int main(void) {
     int ch, sum = 0;  // Initialize sum to 0
 
     printf("Enter a word: ");
 
     // Read characters one by one until newline is encountered
     while ((ch = getchar()) != '\n') {
         switch (toupper(ch)) {  // Convert to uppercase
             case 'A': case 'E': case 'I': case 'L': case 'N': 
             case 'O': case 'R': case 'S': case 'T': case 'U':
                 sum += 1;
                 break;
             case 'D': case 'G':
                 sum += 2;
                 break;
             case 'B': case 'C': case 'M': case 'P':
                 sum += 3;
                 break;
             case 'F': case 'H': case 'V': case 'W': case 'Y':
                 sum += 4;
                 break;
             case 'K':
                 sum += 5;
                 break;
             case 'J': case 'X':
                 sum += 8;
                 break;
             case 'Q': case 'Z':
                 sum += 10;
                 break;
             // Nonalphabetic characters are ignored.
         }
     }
 
     // Output the total Scrabble value
     printf("Scrabble value: %d\n", sum);
 
     return 0;
 }
 