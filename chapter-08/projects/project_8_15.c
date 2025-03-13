/*
 * Chapter 8, Project 15 – Caesar Cipher
 * --------------------------------------
 * This program encrypts a message using the Caesar cipher, an ancient encryption technique
 * attributed to Julius Caesar. Each letter in the message is shifted by a fixed number of 
 * positions in the alphabet. If the shift goes past 'Z' or 'z', it wraps around to the beginning.
 *
 * Process:
 * --------
 *  1. The user enters a message (maximum 80 characters).
 *  2. The user then enters a shift amount (between 1 and 25).
 *  3. The program processes each character:
 *       - If the character is an uppercase letter (A–Z), it is shifted using the formula:
 *              ((ch - 'A') + n) % 26 + 'A'
 *       - If the character is a lowercase letter (a–z), it is shifted using:
 *              ((ch - 'a') + n) % 26 + 'a'
 *       - Non-letter characters remain unchanged.
 *  4. The encrypted message is then displayed.
 *
 * Example Run:
 * ------------
 *  Enter message to be encrypted: Go ahead, make my day.
 *  Enter shift amount (1-25): 3
 *  Encrypted message: Jr dkhdg, pdnh pb gdb.
 *
 * Note:
 * -----
 * - The program can also decrypt a message if the user enters 26 minus the original key.
 * - The input is stored in an array and processed character by character.
 */

 #include <stdio.h>

 int main(void) 
 {
     char arr[81];  // Array to store the input message (max 80 characters + null terminator)
     char ch;
     int i = 0, n;
 
     // Prompt the user to enter a message
     printf("Enter message to be encrypted: ");
     while ((ch = getchar()) != '\n' && i < 80) {
         arr[i] = ch;
         i++;
     }
     arr[i] = '\0'; // Null-terminate the string
 
     // Prompt the user to enter the shift amount
     printf("Enter shift amount (1-25): ");
     scanf("%d", &n);
 
     // Print the encrypted message label
     printf("Encrypted message: ");
 
     // Process the message and encrypt it using the Caesar cipher
     i = 0;
     while (arr[i] != '\0') {
         if (arr[i] >= 'a' && arr[i] <= 'z') {
             // Encrypt lowercase letters
             arr[i] = ((arr[i] - 'a') + n) % 26 + 'a';
         } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
             // Encrypt uppercase letters
             arr[i] = ((arr[i] - 'A') + n) % 26 + 'A';
         }
         // Print each character after processing
         printf("%c", arr[i]);
         i++;  
     }
     printf("\n");
 
     return 0;
 }
 