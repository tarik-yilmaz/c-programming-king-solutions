/*
 * Chapter 7, Project 4 – Translating an Alphabetic Phone Number to Numeric Form
 * ------------------------------------------------------------------------------
 * This program converts an alphabetic phone number into its numeric equivalent.
 *
 * Process:
 * --------
 *  1. The program prompts the user to enter a phone number.
 *  2. It reads the input one character at a time using getchar() until a newline is encountered.
 *  3. For each character:
 *       - If it is an uppercase alphabetic character, it is converted to the corresponding
 *         digit on a telephone keypad:
 *             A, B, C → 2
 *             D, E, F → 3
 *             G, H, I → 4
 *             J, K, L → 5
 *             M, N, O → 6
 *             P, Q, R, S → 7
 *             T, U, V → 8
 *             W, X, Y → 9
 *       - If the character is not alphabetic (e.g., a digit or punctuation), it is printed unchanged.
 *
 * Example Runs:
 * -------------
 *  Input: CALLATT
 *  Output: 2255288
 *
 *  Input: 1-800-COL-LECT
 *  Output: 1-800-265-5328
 *
 * Note:
 * -----
 * - The program assumes that any letters entered are uppercase.
 */

 #include <stdio.h>

 int main(void) {
     char ch; // Variable to store each character input by the user
 
     // Prompt the user to enter a phone number
     printf("Enter phone number: ");
 
     // Read and process each character until newline is encountered
     while ((ch = getchar()) != '\n') {
         // Convert alphabetic characters to their corresponding numeric keypad values
         if (ch >= 'A' && ch <= 'C') {          // A, B, C map to 2
             printf("2");
         } else if (ch >= 'D' && ch <= 'F') {   // D, E, F map to 3
             printf("3");
         } else if (ch >= 'G' && ch <= 'I') {   // G, H, I map to 4
             printf("4");
         } else if (ch >= 'J' && ch <= 'L') {   // J, K, L map to 5
             printf("5");
         } else if (ch >= 'M' && ch <= 'O') {   // M, N, O map to 6
             printf("6");
         } else if (ch >= 'P' && ch <= 'S') {   // P, Q, R, S map to 7
             printf("7");
         } else if (ch >= 'T' && ch <= 'V') {   // T, U, V map to 8
             printf("8");
         } else if (ch >= 'W' && ch <= 'Y') {   // W, X, Y map to 9
             printf("9");
         } else {
             // If the character is not alphabetic, print it unchanged
             putchar(ch);
         }
     }
 
     return 0;
 }
 