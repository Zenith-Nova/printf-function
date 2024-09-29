#include "main.h"

/**
 * _putchar - Print a character to the standard output stream.
 * @c: The character to be printed.
 *
 * This function writes a single character to the standard output (stdout).
 * It uses the write system call and checks for errors during the
 * write operation.
 *
 * Return: The number of bytes written on success, or -1 on error.
 */
int _putchar(char c)
{
	ssize_t char_count = write(STDOUT_FILENO, &c, sizeof(char));

	if (char_count == -1)
	{
		return (-1);
	}

	return (char_count);
}
