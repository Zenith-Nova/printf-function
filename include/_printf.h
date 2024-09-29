#ifndef __PRINTF_H_
#define __PRINTF_H_

/**
 * _printf - Print formatted output to the standard output stream.
 * @format: The format specifier string.
 *
 * This function processes a format string and prints the formatted output
 * to the standard output stream. It supports various format specifiers,
 * which can be used to print different types of data.
 *
 * Return: The number of characters printed (excluding the null byte),
 *         or -1 if an error occurs (e.g., if the format string is NULL).
 */
int _printf(const char *format, ...);

#endif /*__PRINTF_H_*/
