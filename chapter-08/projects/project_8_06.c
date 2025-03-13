/*
 * Chapter 8, Project 6 – B1FF Filter
 * ----------------------------------
 * This program reads a message entered by the user and translates it into B1FF-speak.
 * The transformation includes:
 *   - Converting all letters to uppercase.
 *   - Substituting specific letters with digits:
 *         A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5.
 *   - Appending 10 exclamation marks at the end.
 *
 * Process:
 * --------
 *  1. The user enters a message, which is stored in an array.
 *  2. The program determines the input length by reading characters until a newline is encountered.
 *  3. It converts all characters in the message to uppercase.
 *  4. It replaces the specified letters with their corresponding digits.
 *  5. Finally, it prints the transformed message followed by 10 exclamation marks.
 *
 * Example Run:
 * ------------
 *  Enter message: Hey dude, C is rilly cool
 *  In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 */

 #include <stdio.h>
 #include <ctype.h>
 
 int main(void)
 {
     char array[100];
     int input_length = 0; // Stores the actual length of the input
 
     // Prompt the user to enter a message
     printf("Enter message: ");
 
     // Read input character by character until newline is encountered
     for (int i = 0; i < 100; i++) {
         scanf("%c", &array[i]);
         if (array[i] == '\n') {
             array[i] = '\0';  // Replace newline with null terminator
             input_length = i; // Store the input length
             break;
         }
     }
 
     // Convert each character to uppercase
     for (int i = 0; i < input_length; i++) {
         array[i] = toupper(array[i]);
     }
 
     // Replace specific letters with digits as defined for B1FF-speak
     for (int i = 0; i < input_length; i++) {
         switch (array[i]) {
             case 'A': array[i] = '4'; break;
             case 'B': array[i] = '8'; break;
             case 'E': array[i] = '3'; break;
             case 'I': array[i] = '1'; break;
             case 'O': array[i] = '0'; break;
             case 'S': array[i] = '5'; break;
             default: break;
         }
     }
 
     // Print the final transformed message followed by 10 exclamation marks
     printf("%s\n!!!!!!!!!!", array);
 
     return 0;
 }
 