#ifndef __PUTCHAR_H_
#define __PUTCHAR_H_

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
int _putchar(const char c);

#endif /*__PUTCHAR_H_*/
