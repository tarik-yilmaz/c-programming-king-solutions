/*
 * Chapter 9, Exercise 14 – Check for Zero in Array
 * -------------------------------------------------
 * This program defines a function `has_zero` that checks if any element in an integer
 * array contains the value 0. If at least one element is 0, it returns true. Otherwise,
 * it returns false.
 *
 * Original Bug:
 * -------------
 * The original implementation incorrectly returned false as soon as the first element
 * wasn't zero, without checking the rest of the array.
 *
 * Correct Logic:
 * --------------
 * - Loop through each element of the array.
 * - Return true if a zero is found.
 * - If the loop completes without finding zero, return false.
 *
 * Example Runs:
 * -------------
 *  Input: {1, 2, 3, 0, 5} → Output: true
 *  Input: {7, 4, 2, 9}    → Output: false
 */

 #include <stdio.h>
 #include <stdbool.h>  // Needed for the bool, true, and false keywords
 
 // Function to check if array contains a zero
 bool has_zero(int a[], int n) {
     for (int i = 0; i < n; i++) {
         if (a[i] == 0)
             return true;
     }
     return false;
 }
 
 int main() {
     int a[] = {3, 5, 7, 0, 9};
     int b[] = {1, 2, 3, 4, 5};
     
     printf("Array a contains zero? %s\n", has_zero(a, 5) ? "true" : "false");
     printf("Array b contains zero? %s\n", has_zero(b, 5) ? "true" : "false");
 
     return 0;
 }
 