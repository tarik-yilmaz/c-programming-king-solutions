/*
 * Chapter 7, Exercise 1 – Decimal Values of Integer Constants
 * -----------------------------------------------------------
 * This exercise asks for the decimal value of each of the following integer constants:
 *
 * (a) 077
 * (b) 0x77
 * (c) 0XABC
 *
 * Explanation:
 * ------------
 * - Integer constants starting with 0 are interpreted as octal (base 8).
 * - Constants starting with 0x or 0X are interpreted as hexadecimal (base 16).
 *
 * (a) 077:
 *   - Octal 077 is evaluated as: 7 * 8^1 + 7 * 8^0 = 56 + 7 = 63.
 *   - Decimal value: 63
 *
 * (b) 0x77:
 *   - Hexadecimal 0x77 is evaluated as: 7 * 16^1 + 7 * 16^0 = 112 + 7 = 119.
 *   - Decimal value: 119
 *
 * (c) 0XABC:
 *   - Hexadecimal 0XABC is evaluated as: A * 16^2 + B * 16^1 + C * 16^0.
 *   - Using A = 10, B = 11, C = 12:
 *         10 * 256 + 11 * 16 + 12 = 2560 + 176 + 12 = 2748.
 *   - Decimal value: 2748
 *
 * Final Answers:
 * --------------
 * (a) 077   : 63
 * (b) 0x77  : 119
 * (c) 0XABC : 2748
 */
