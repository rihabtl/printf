#include "main.h"

/**
 * handle_format - handles different specifiers
 * @counter: the counter
 * @specifier: the specifier
 * @arg: argument
 */

void handle_format(va_list arg, char specifier, int *counter)
{
	switch (specifier)
	{
		case 'c':
			{
				_putchar(va_arg(arg, int));
				(*counter)++;
				break;
			}
		case 's':
			{
<<<<<<< HEAD
				(*counter) += put_string(va_arg(arg, char *));
=======
				counter += put_string(va_arg(arg, char *));
>>>>>>> b2d4d0a70790c6bdaaddd78e523490c5bd03c14d
				break;
			}
		case '%':
			{
				(*counter) += _putchar('%');
				break;
			}
		default:
			{
				_putchar('%');
				_putchar(specifier);
				(*counter) += 2;
				break;
			}
	}
}
