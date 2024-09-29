#include "main.h"

/**
 * handle_format_specifier - Handle a single format specifier.
 * @specifier: The format specifier character.
 * @args_list: The argument list to fetch values from.
 *
 * Return: The number of characters printed for this specifier.
 */
__u_int handle_format_specifier(char specifier, va_list args_list)
{
	__u_int count = 0;

	switch (specifier)
	{
	case '%':
		_putchar('%');
		count++;
		break;

	case 'c':
		_putchar(va_arg(args_list, int));
		count++;
		break;

	case 's':
		char *str = va_arg(args_list, char *);

		count += _puts(str);
		break;

	case 'd':
		break;
		/* Add more cases for other specifiers */

	default:
		_putchar('?');
		count++;
		break;
	}

	return (count);
}
