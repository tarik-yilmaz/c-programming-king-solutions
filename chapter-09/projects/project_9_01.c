/*
 * Chapter 9, Project 1 – Recursive Selection Sort
 * ------------------------------------------------
 * This program sorts an array of integers using recursive selection sort.
 * 
 * Algorithm:
 * ----------
 * 1. Find the largest element in the current portion of the array.
 * 2. Swap it with the last element.
 * 3. Call the function recursively to sort the first n - 1 elements.
 *
 * Example:
 * --------
 * Input:  {1, 2, 3}
 * Output: {1, 2, 3}
 */

 #include <stdio.h>

 // Recursive selection sort
 void selection_sort(int a[], int n) {
     if (n <= 1)
         return;
 
     // Find index of the largest element in a[0..n-1]
     int max_index = 0;
     for (int i = 1; i < n; i++) {
         if (a[i] > a[max_index]) {
             max_index = i;
         }
     }
 
     // Swap it with the last element
     int temp = a[max_index];
     a[max_index] = a[n - 1];
     a[n - 1] = temp;
 
     // Recur for the first n - 1 elements
     selection_sort(a, n - 1);
 }
 
 int main() {
     int a[] = {5, 2, 9, 1, 3};
     int size = sizeof(a) / sizeof(a[0]);
 
     selection_sort(a, size);
 
     printf("Sorted array: ");
     for (int i = 0; i < size; i++) {
         printf("%d ", a[i]);
     }
     printf("\n");
 
     return 0;
 }
 