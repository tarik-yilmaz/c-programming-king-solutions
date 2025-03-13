/*
 * Chapter 8, Project 5 – Monthly Compounded Interest Calculator
 * -------------------------------------------------------------
 * This program modifies the interest.c program from Section 8.1 so that it compounds
 * interest monthly instead of annually. The output format remains the same; the balance
 * is still shown at annual intervals.
 *
 * Process:
 * --------
 * 1. The user enters a starting interest rate and the number of years.
 * 2. The program initializes an array of 5 interest rates (starting at the given rate and
 *    increasing by 1 percentage point for each element) and sets the initial balance.
 * 3. For each year, the program compounds the interest monthly (i.e., 12 times per year).
 *    - For each month, the balance is updated by multiplying by (1 + (rate/100)/12).
 * 4. After processing all 12 months for the year, the balance for each rate is printed.
 *
 * Example Run:
 * ------------
 *  Enter interest rate: 5
 *  Enter number of years: 3
 *
 *  Years    5%    6%    7%    8%    9%
 *    1    105.12 105.98 106.86 107.76 108.68
 *    2    110.48 111.96 113.45 115.00 116.57
 *    3    116.08 118.18 120.30 122.44 124.61
 *
 * Note:
 * -----
 * - The macro NUM_RATES computes the number of interest rates in the array.
 * - The interest is compounded monthly (12 times per year).
 */

 #include <stdio.h>
 #define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
 #define INITIAL_BALANCE 100.00
 
 int main(void) {
     int i, low_rate, num_years, year, month;
     double value[5];
 
     // Prompt the user to enter the starting interest rate and number of years
     printf("Enter interest rate: ");
     scanf("%d", &low_rate);
     printf("Enter number of years: ");
     scanf("%d", &num_years);
 
     // Initialize and display the header with the rates
     printf("\nYears");
     for (i = 0; i < NUM_RATES; i++) {
         printf("%6d%%", low_rate + i);
         value[i] = INITIAL_BALANCE;
     }
     printf("\n");
 
     // Loop over each year, compounding interest monthly
     for (year = 1; year <= num_years; year++) {
         // For each month, compound the interest for each rate
         for (month = 1; month <= 12; month++) {
             for (i = 0; i < NUM_RATES; i++) {
                 value[i] *= (1 + ((low_rate + i) / 100.0) / 12);
             }
         }
     
         // Print the balance at the end of the year
         printf("%3d     ", year);
         for (i = 0; i < NUM_RATES; i++) {
             printf("%7.2f", value[i]);
         }
         printf("\n");
     }
 
     return 0;
 }
 