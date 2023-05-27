#include "main.h"

/**
 * put_string - it's a function that print a string
 * @str: string
 * Return: i
 */
int put_string(const char *str)
{
	int i;

	i = 0;

	if (str == NULL)
	{
		put_string("(null)");
		return (6);
	}
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	return (i);
}
