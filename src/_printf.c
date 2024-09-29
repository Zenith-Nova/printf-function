#include "main.h"

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
int _printf(const char *format, ...)
{
	__u_int char_count = 0;
	va_list args_list;

	/**
	 * Check for NULL or empty format string
	 */
	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_start(args_list, format);

	for (__u_int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args_list, int));
			i++;
		}
		char_count++;

		/* TODO: Handle format specifiers (e.g., %d, %s, etc.) */
	}

	va_end(args_list);

	return (char_count);
}
