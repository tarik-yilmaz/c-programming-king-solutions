/*
 * Chapter 7, Project 10 – Vowel Counter in a Sentence
 * -----------------------------------------------------
 * This program counts the number of vowels (a, e, i, o, and u) in a sentence.
 *
 * Process:
 * --------
 *  1. The user is prompted to enter a sentence.
 *  2. The program reads characters one by one until a newline ('\n') is encountered.
 *  3. Each character is converted to lowercase using tolower(), then checked to see if it
 *     is a vowel (a, e, i, o, or u).
 *  4. If a vowel is found, a counter is incremented.
 *  5. The final count of vowels is displayed.
 *
 * Example Run:
 * ------------
 *  Enter a sentence: And that's the way it is.
 *  Your sentence contains 6 vowels.
 *
 * Note:
 * -----
 * - The program uses the <ctype.h> library to convert characters to lowercase.
 */

 #include <stdio.h>
 #include <ctype.h> // For tolower function
 
 int main(void) {
     int len = 0;   // Counter for vowels
     char ch;       // Variable to store each character input
 
     // Prompt the user to enter a sentence
     printf("Enter a sentence: ");
 
     // Read characters until a newline ('\n') is encountered
     while ((ch = getchar()) != '\n') {
         // Convert the character to lowercase and check if it is a vowel
         if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' ||
             tolower(ch) == 'o' || tolower(ch) == 'u') {
             len++; // Increment vowel count if a vowel is found
         }
     }
 
     // Display the total number of vowels in the sentence
     printf("Your sentence contains %d vowels.\n", len);
 
     return 0; // End of program
 }
 