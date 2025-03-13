/*
 * Chapter 8, Project 16 – Anagram Tester
 * ---------------------------------------
 * This program tests whether two words are anagrams (i.e., they are permutations
 * of the same letters). It uses an array of 26 integers to count the occurrences of
 * each letter in the alphabet.
 *
 * Process:
 * --------
 *  1. The user is prompted to enter the first word. Each letter is converted to lowercase,
 *     and the corresponding element in the count array is incremented.
 *  2. The user is then prompted to enter the second word. For each letter, the corresponding
 *     element in the count array is decremented.
 *  3. After processing both words, the program checks whether all elements in the count array
 *     are zero. If so, the words are anagrams; otherwise, they are not.
 *
 * Example Run:
 * ------------
 *  Enter first word: smartest
 *  Enter second word: mattress
 *  The words are anagrams.
 *
 *  Enter first word: dumbest
 *  Enter second word: stumble
 *  The words are not anagrams.
 *
 * Note:
 * -----
 * - Non-alphabetic characters are ignored.
 * - Upper-case letters are treated the same as lower-case letters.
 * - The program uses functions from <ctype.h> (isalpha and tolower) for input processing.
 */

 #include <stdio.h>
 #include <ctype.h>
 
 int main(void) 
 {
     int count[26] = {0};  // Frequency array for letters a-z
     char ch;
 
     // Prompt and process the first word: count each letter
     printf("Enter first word: ");
     while ((ch = getchar()) != '\n') {
         if (isalpha(ch)) {
             count[tolower(ch) - 'a']++;
         }
     }
 
     // Prompt and process the second word: decrement for each letter
     printf("Enter second word: ");
     while ((ch = getchar()) != '\n') {
         if (isalpha(ch)) {
             count[tolower(ch) - 'a']--;
         }
     }
 
     // Check whether all counts are zero
     for (int i = 0; i < 26; i++) {
         if (count[i] != 0) {
             printf("The words are not anagrams.\n");
             return 0;
         }
     }
 
     // If all counts are zero, the words are anagrams
     printf("The words are anagrams.\n");
     return 0;
 }
 