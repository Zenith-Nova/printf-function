#ifndef _HANDLE_FORMAT_SPECIFIER_H_
#define _HANDLE_FORMAT_SPECIFIER_H_

/**
 * handle_format_specifier - Handle a single format specifier.
 * @specifier: The format specifier character.
 * @args_list: The argument list to fetch values from.
 *
 * This function processes a format specifier and prints the corresponding
 * argument. It supports specifiers like %c, %s, %d, etc.
 *
 * Return: The number of characters printed for this specifier, or 0 if
 *         the specifier is unrecognized.
 */
__u_int handle_format_specifier(char specifier, va_list args_list);

#endif /* _HANDLE_FORMAT_SPECIFIER_H_ */
