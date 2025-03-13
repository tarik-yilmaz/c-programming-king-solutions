/*
 * Chapter 7, Project 13 – Average Word Length Calculator
 * ---------------------------------------------------------
 * This program calculates the average word length for a sentence.
 *
 * Process:
 * --------
 *  1. The user is prompted to enter a sentence.
 *  2. The program reads the sentence character by character until a newline ('\n') is encountered.
 *  3. It counts the total number of non-space characters (considered as part of words)
 *     and the number of words by counting spaces.
 *  4. The average word length is calculated as the total number of non-space characters
 *     divided by the number of words.
 *  5. The result is displayed to one decimal place.
 *
 * Example Run:
 * ------------
 *  Enter a sentence: It was deja vu all over again.
 *  Average word length: 3.4
 *
 * Note:
 * -----
 * - For simplicity, punctuation is considered part of the word to which it is attached.
 */

 #include <stdio.h>

 int main(void) {
     int total_length = 0;  // Total count of non-space characters
     int word_count = 1;    // Start with 1 because there is at least one word
     char ch;             // Variable to hold each character input by the user
 
     // Prompt the user to enter a sentence
     printf("Enter a sentence: ");
 
     // Read characters until a newline ('\n') is encountered
     while ((ch = getchar()) != '\n') {
         if (ch != ' ') {
             total_length++;  // Count non-space characters
         }
         if (ch == ' ') {
             word_count++;    // Increment word count for each space encountered
         }
     }
 
     // Calculate the average word length as a float
     float average = (float) total_length / word_count;
 
     // Display the average word length to one decimal place
     printf("Average word length: %.1f\n", average);
 
     return 0; // End of program
 }
 