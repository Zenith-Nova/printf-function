#ifndef __PUTS_H_
#define __PUTS_H_

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
int _puts(const char *s);

#endif /*__PUTS_H_*/
