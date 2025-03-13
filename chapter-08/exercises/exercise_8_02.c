/*
 * Chapter 8, Exercise 2 – Using a Digit in Character Form as an Array Subscript
 * ----------------------------------------------------------------------------
 * The Q&A section shows how to use a letter as an array subscript.
 * To use a digit in character form (e.g., '0', '1', ..., '9') as an array subscript,
 * you must convert the character to its integer equivalent. This is done by subtracting
 * the ASCII value of '0' from the character.
 *
 * Explanation:
 * -------------
 * - In ASCII, the characters '0' through '9' have decimal values 48 through 57.
 * - Subtracting '0' from a digit character converts it to its corresponding integer.
 *   For example, '5' - '0' = 53 - 48 = 5.
 *
 * Example:
 * --------
 *     int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
 *     char digit_char = '7';
 *
 *     // Convert the character to an integer index:
 *     int index = digit_char - '0';
 *
 *     // Now, digits[index] accesses the element corresponding to the digit 7.
 *     printf("The digit at index %d is %d\n", index, digits[index]);
 *
 * Summary:
 * --------
 * To use a digit in character form as an array subscript:
 *   1. Subtract '0' from the character to convert it to its integer equivalent.
 *   2. Use the resulting integer as the array index.
 *
 * Final solution:
 * ---------------
 * Use digit_char - '0' to convert a digit in character form (e.g., '5') to an integer (5),
 * then use that integer as the array subscript.
 */
