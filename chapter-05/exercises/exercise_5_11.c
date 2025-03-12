/*
 * Chapter 5, Exercise 11 – Georgia Area Code Mapping
 * ---------------------------------------------------
 * This program uses a switch statement to map telephone area codes in Georgia
 * to their major cities. If the area code is not recognized, a default message
 * is displayed.
 *
 * Example Run:
 * ------------
 *  Enter an area code: 404
 *  Output: Atlanta
 *
 *  Enter an area code: 706
 *  Output: Columbus
 *
 *  Enter an area code: 999
 *  Output: Area code not recognized
 *
 * Explanation:
 * ------------
 * - The switch statement maps:
 *     • 229 to "Albany".
 *     • 404, 470, 678, 770 to "Atlanta".
 *     • 478 to "Macon".
 *     • 706, 762 to "Columbus".
 *     • 912 to "Savannah".
 * - The default case handles any area code not in the list.
 * - Each case ends with a break to prevent fall-through.
 */

 #include <stdio.h>

 int main(void) {
     int area_code;
 
     // Prompt the user for an area code
     printf("Enter an area code: ");
     scanf("%d", &area_code);
 
     // Use a switch statement to map area codes to cities
     switch (area_code) {
         case 229: 
             printf("Albany\n");
             break;
         case 404: case 470: case 678: case 770: 
             printf("Atlanta\n");
             break;
         case 478: 
             printf("Macon\n");
             break;
         case 706: case 762: 
             printf("Columbus\n");
             break;
         case 912: 
             printf("Savannah\n");
             break;
         default:
             printf("Area code not recognized\n");
             break;
     }
 
     return 0;
 }
 
 /*
 // Key Takeaways:
 // --------------
 // ✅ Grouping multiple area codes under one case (e.g., for Atlanta) reduces redundancy.
 // ✅ The default case ensures unrecognized area codes are handled gracefully.
 // ✅ Break statements prevent fall-through, ensuring only the correct message is printed.
 */
 