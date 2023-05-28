#include"main.h"

/**
 * print_binary - convert from decimal to binary
 * @n : number to convert
 * Return: binary
 */

int print_binary(unsigned int n)
{
	int counter = 0;

	if (n > 1)
	{
		counter += print_binary(n / 2);
		counter++;
	}
	_putchar('0' + (n % 2));
	return (counter);
}
