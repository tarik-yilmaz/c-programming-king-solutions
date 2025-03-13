/*
 * Chapter 8, Project 12 – Scrabble Value Calculator Using an Array
 * ---------------------------------------------------------------
 * This program calculates the Scrabble value of a word by using an array to store
 * the Scrabble letter values for the 26 letters of the alphabet. The array has 26 elements,
 * where element 0 (corresponding to 'A') stores 1, element 1 (corresponding to 'B') stores 3,
 * and so on. As each character of the input word is read, the program uses the array to
 * determine the letter's Scrabble value and sums these values.
 *
 * Process:
 * --------
 *  1. The program prompts the user to enter a word (up to 26 characters).
 *  2. The word is stored in an array.
 *  3. Each character is converted to uppercase, then its corresponding Scrabble value is
 *     retrieved from the scrabble_values array using the index (character - 'A').
 *  4. The total value is computed and printed.
 *
 * Example Run:
 * ------------
 *  Enter a word: HELLO
 *  Scrabble value: 8
 *
 * Note:
 * -----
 * - This program assumes that the input consists only of alphabetic characters.
 */

 #include <stdio.h>
 #include <ctype.h>
 
 int main(void) {
     char input[26];  // Array to store the input word (max 26 characters)
     int i = 0, sum = 0;
     char ch;
 
     // Scrabble letter values for A-Z (index 0 corresponds to A, index 25 corresponds to Z)
     int scrabble_values[26] = {
          1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
          5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 
          1, 4, 4, 8, 4, 10
     };
 
     // Prompt the user to enter a word
     printf("Enter a word: ");
 
     // Read input character by character until newline or maximum length reached
     while ((ch = getchar()) != '\n' && i < 26) {
         input[i] = ch;
         i++;
     }
     // Null-terminate the string (optional, if further processing as a string is needed)
     input[i] = '\0';
 
     // Calculate the total Scrabble score by processing each character
     for (int j = 0; j < i; j++) {
         sum += scrabble_values[toupper(input[j]) - 'A'];
     }
 
     // Output the total Scrabble value
     printf("Scrabble value: %d\n", sum);
 
     return 0;
 }
 