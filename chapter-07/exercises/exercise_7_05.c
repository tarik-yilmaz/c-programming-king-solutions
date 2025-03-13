/*
 * Chapter 7, Exercise 5 – Legality of Representations of the Number 65
 * --------------------------------------------------------------------
 * This exercise asks which one of the following is not a legal way to write the number 65,
 * assuming the character set is ASCII.
 *
 * (a) 'A'
 * (b) 0b1000001
 * (c) 0101
 * (d) 0x41
 *
 * Explanation:
 * ------------
 * (a) 'A':
 *     - Legal. The character 'A' has the ASCII value 65.
 *
 * (b) 0b1000001:
 *     - Not legal. The prefix "0b" for binary literals is not supported in standard C.
 *
 * (c) 0101:
 *     - Legal. This is an octal constant. 0101 (octal) equals 65 in decimal.
 *
 * (d) 0x41:
 *     - Legal. This is a hexadecimal constant. 0x41 (hex) equals 65 in decimal.
 *
 * Final Solution:
 * ---------------
 * (a) 'A': Legal.
 * (b) 0b1000001: Not legal.
 * (c) 0101: Legal.
 * (d) 0x41: Legal.
 */
