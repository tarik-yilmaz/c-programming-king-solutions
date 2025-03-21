/*
 * Chapter 9, Exercise 11 – GPA Calculator
 * ---------------------------------------
 * This program defines a function `compute_GPA` that takes an array of letter grades
 * and calculates the average GPA. The grades can be provided in either uppercase or
 * lowercase format, and are converted internally for consistent processing.
 *
 * GPA Mapping:
 * ------------
 * A → 4
 * B → 3
 * C → 2
 * D → 1
 * F → 0
 *
 * Process:
 * --------
 * 1. Iterate through the grades array.
 * 2. Convert each grade to lowercase for consistent comparison.
 * 3. Use conditional logic to sum up the GPA values based on grade letters.
 * 4. Divide the total by the number of grades to compute the average.
 *
 * Example Run:
 * ------------
 *  Input grades: {'A', 'B', 'C', 'D', 'F'}
 *  Output:
 *      The average of grades is: 2.00
 */

 #include <stdio.h>
 #include <ctype.h>
 
 // Function to compute GPA based on an array of letter grades
 float compute_GPA(char grades[], int n) {
     float sum = 0;
 
     for (int i = 0; i < n; i++) {
         char g = tolower(grades[i]); // Normalize to lowercase
 
         if (g == 'a') sum += 4;
         else if (g == 'b') sum += 3;
         else if (g == 'c') sum += 2;
         else if (g == 'd') sum += 1;
         // 'f' adds 0 by default and doesn't need to be handled explicitly
     }
 
     return sum / n;
 }
 
 int main() {
     char grades[] = {'A', 'B', 'C', 'D', 'F'};
     int size = sizeof(grades) / sizeof(grades[0]);
 
     printf("The average of grades is: %.2f\n", compute_GPA(grades, size));
 
     return 0;
 }
 