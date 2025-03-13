/*
 * Chapter 8, Project 14 – Reverse Sentence by Words
 * --------------------------------------------------
 * This program reads a sentence from the user and then reverses the words in the sentence.
 * The program stops reading when it encounters a terminating character ('.', '!', or '?'),
 * which is saved separately. It then prints the words in reverse order, followed by the
 * terminating character.
 *
 * Process:
 * --------
 *  1. Read the sentence character by character into an array until a newline or a terminating
 *     character ('.', '!', '?') is encountered. Save the terminating character separately.
 *  2. Null-terminate the array.
 *  3. Starting from the end of the array, search backward to find the beginning of each word.
 *  4. Print each word in reverse order.
 *  5. Finally, print the terminating character.
 *
 * Example Run:
 * ------------
 *  Enter a sentence: you can cage a swallow can't you?
 *  Reversal of sentence: you can't swallow a cage can you?
 */

 #include <stdio.h>

 int main(void)
 {
     printf("Enter a sentence: ");
     
     char ch;
     char end = '\0';         // To store the terminating character ('.', '!', or '?')
     char arr[100];           // Array to store the sentence (max 99 characters + null terminator)
     int i = 0;
 
     // Read the sentence into the array
     while ((ch = getchar()) != '\n' && i < 99) {
         if (ch == '.' || ch == '!' || ch == '?') {
             end = ch;      // Save the terminating character
             break;         // Stop reading input once the terminating character is encountered
         }
         arr[i++] = ch;
     }
     arr[i] = '\0';           // Null-terminate the array
 
     // Reverse the sentence word by word
     if (end != '\0') {
         int end_index = i - 1;  // Start from the last valid character in the array
 
         // Process the array in reverse order, word by word
         while (end_index >= 0) {
             // Find the beginning of the current word
             int start_index = end_index;
             while (start_index >= 0 && arr[start_index] != ' ') {
                 start_index--;
             }
 
             // Print the current word
             for (int j = start_index + 1; j <= end_index; j++) {
                 putchar(arr[j]);
             }
 
             // If this is not the first word, print a space
             if (start_index >= 0) {
                 putchar(' ');
             }
 
             // Move to the previous word
             end_index = start_index - 1;
         }
 
         // Print the terminating character and a newline
         putchar(end);
         putchar('\n');
     }
 
     return 0;
 }
 