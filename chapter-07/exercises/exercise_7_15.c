/*
 * Chapter 7, Exercise 15 – Creating Fixed-Width Integer Types
 * ------------------------------------------------------------
 * Use typedef to create types named int8, int16, and int32 that represent
 * 8-bit, 16-bit, and 32-bit integers on your machine.
 *
 * Explanation:
 * ------------
 * - The <stdint.h> header provides fixed-width integer types such as int8_t, int16_t, and int32_t.
 * - Using typedef, we create more concise aliases (int8, int16, int32) for these types.
 * - This enhances code readability and portability across different platforms.
 *
 * Final Solution:
 * ---------------
 * #include <stdint.h>
 *
 * typedef int8_t  int8;
 * typedef int16_t int16;
 * typedef int32_t int32;
 */

 #include <stdint.h>

 typedef int8_t  int8;
 typedef int16_t int16;
 typedef int32_t int32;
 