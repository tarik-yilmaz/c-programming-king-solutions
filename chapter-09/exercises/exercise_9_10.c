/*
 * Chapter 9, Exercise 10 – Array Processing Functions
 * ---------------------------------------------------
 * This program implements three functions to process an array of integers:
 * 
 * (a) `largest_element(a, n)`: Returns the largest element in the array.
 * (b) `average_element(a, n)`: Returns the average of all elements in the array.
 * (c) `positive_elements(a, n)`: Returns the count of positive elements in the array.
 *
 * Process:
 * --------
 * - `largest_element()` iterates through the array to find the maximum value.
 * - `average_element()` calculates the sum of all elements and divides by `n`.
 * - `positive_elements()` counts how many values are greater than zero.
 *
 * Example Run:
 * ------------
 *  Input array: {-5, -4, -3, -2, 1}
 *  Output:
 *      The largest element is: 1
 *      The average is: -2.60
 *      The number of positive elements is: 1
 */

 #include <stdio.h>

 // Function to find the largest element in an array
 int largest_element(int a[], int n) {
     int max = a[0];
 
     for (int i = 1; i < n; i++) {
         if (a[i] > max) {
             max = a[i];
         }
     }
     return max;
 }
 
 // Function to compute the average of all elements
 double average_element(int a[], int n) {
     int sum = 0;
 
     for (int i = 0; i < n; i++) {
         sum += a[i];
     }
     return (double) sum / n;
 }
 
 // Function to count the number of positive elements
 int positive_elements(int a[], int n) {
     int counter = 0;
 
     for (int i = 0; i < n; i++) {
         if (a[i] > 0) {
             counter++;
         }
     }
     return counter;
 }
 
 int main() {
     int a[] = {-5, -4, -3, -2, 1};
     int size = sizeof(a) / sizeof(a[0]);
 
     // Function calls and output
     printf("The largest element is: %d\n", largest_element(a, size));
     printf("The average is: %.2f\n", average_element(a, size));
     printf("The number of positive elements is: %d\n", positive_elements(a, size));
 
     return 0;
 }
 