/*
 * Chapter 8, Project 11 – Phone Number Translator with Label
 * ----------------------------------------------------------
 * This program reads a phone number (up to 15 characters) from the user and translates it
 * into its numeric form according to the telephone keypad mapping:
 *
 *      A, B, C -> 2
 *      D, E, F -> 3
 *      G, H, I -> 4
 *      J, K, L -> 5
 *      M, N, O -> 6
 *      P, Q, R, S -> 7
 *      T, U, V -> 8
 *      W, X, Y -> 9
 *
 * The program:
 *  1. Reads the input into a character array.
 *  2. Converts the message to uppercase.
 *  3. Replaces letters with their corresponding digits (nonalphabetic characters remain unchanged).
 *  4. Prints the translated message with the label "In numeric form:".
 *
 * Example Run:
 * ------------
 *  Enter phone number: 1-800-COL-LECT
 *  In numeric form: 1-800-265-5328
 */

 #include <stdio.h>
 #include <ctype.h>
 
 int main(void) {
     char arr[16]; // Array to store up to 15 characters plus null terminator
     int i = 0;
     char ch;
 
     // Prompt the user to enter a phone number
     printf("Enter phone number: ");
 
     // Read input character by character until newline or maximum length reached
     while ((ch = getchar()) != '\n' && i < 15) {
         arr[i] = ch;
         i++;
     }
     arr[i] = '\0'; // Null-terminate the string
 
     // Print the numeric form label
     printf("In numeric form: ");
 
     // Process the stored input and translate to numeric form
     for (int j = 0; arr[j] != '\0'; j++) {
         char c = toupper(arr[j]); // Convert to uppercase for uniform processing
 
         // Map letters to digits according to telephone keypad values
         if (c >= 'A' && c <= 'C') {
             printf("2");
         } else if (c >= 'D' && c <= 'F') {
             printf("3");
         } else if (c >= 'G' && c <= 'I') {
             printf("4");
         } else if (c >= 'J' && c <= 'L') {
             printf("5");
         } else if (c >= 'M' && c <= 'O') {
             printf("6");
         } else if (c >= 'P' && c <= 'S') {
             printf("7");
         } else if (c >= 'T' && c <= 'V') {
             printf("8");
         } else if (c >= 'W' && c <= 'Y') {
             printf("9");
         } else {
             // Print nonalphabetic characters unchanged
             printf("%c", c);
         }
     }
 
     printf("\n");
     return 0;
 }
 