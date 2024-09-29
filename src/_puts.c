#include "main.h"

/**
 * _puts - Print a string to the standard output.
 * @s: The character array (string) to be printed.
 *
 * This function writes a string to the standard output using
 * the _putchar function. It counts the number of characters
 * printed until the null terminator is reached.
 *
 * Return: The number of bytes written on success, or -1 on error.
 */
int _puts(const char *s)
{
	__u_int char_count = 0;

	if (s == NULL)
	{
		return (-1);
	}

	while (s[char_count] != '\0')
	{
		_putchar(s[char_count]);
		char_count++;
	}

	return (char_count);
}
