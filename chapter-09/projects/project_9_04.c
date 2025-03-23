/*
 * Chapter 9, Project 4 – Anagram Checker with Modular Functions
 * --------------------------------------------------------------
 * This program checks whether two words are anagrams by using two modular functions:
 * 
 * - `read_word(int counts[26])`: Reads a word from input and updates a letter frequency array.
 * - `equal_array(int counts1[26], int counts2[26])`: Compares two letter frequency arrays.
 * 
 * The program:
 * 1. Reads two words.
 * 2. Converts letters to lowercase and updates their frequency counts.
 * 3. Compares the two frequency arrays to determine if the words are anagrams.
 *
 * Only alphabetic characters are considered; case is ignored.
 */

 #include <stdio.h>
 #include <ctype.h>
 #include <stdbool.h>
 
 // Reads a word and updates the frequency of each letter in the counts array
 void read_word(int counts[26]) {
     char ch;
     while ((ch = getchar()) != '\n') {
         if (isalpha(ch)) {
             counts[tolower(ch) - 'a']++;
         }
     }
 }
 
 // Compares two letter frequency arrays to determine if they are identical
 bool equal_array(int counts1[26], int counts2[26]) {
     for (int i = 0; i < 26; i++) {
         if (counts1[i] != counts2[i]) {
             return false;
         }
     }
     return true;
 }
 
 int main(void) {
     int word1[26] = {0};
     int word2[26] = {0};
 
     printf("Enter first word: ");
     read_word(word1);
 
     printf("Enter second word: ");
     read_word(word2);
 
     if (equal_array(word1, word2)) {
         printf("The words are anagrams!\n");
     } else {
         printf("The words are not anagrams.\n");
     }
 
     return 0;
 }
 