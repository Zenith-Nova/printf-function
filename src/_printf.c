#include "main.h"

/**
 * _printf - Print formatted output to the standard output stream.
 * @format: The format specifier string.
 *
 * This function processes a format string and prints the formatted output
 * to the standard output stream. It supports various format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte),
 *         or -1 if an error occurs (e.g., if the format string is NULL).
 */
int _printf(const char *format, ...)
{
	if (format == NULL || format[0] == '\0')
	{
		return (-1);
	}

	va_list args_list;

	va_start(args_list, format);

	__u_int char_count = 0;

	for (__u_int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		else
		{
			i++;
			char_count += handle_format_specifier(format[i], args_list);
		}
	}

	va_end(args_list);
	return (char_count);
}
