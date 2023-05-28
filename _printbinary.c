#include"main.h"

/**
 * print_binary - convert from decimal to binary
 * @n : number to convert
 * Return: binary
 */

int print_binary(unsigned int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	return (_putchar('0' + (n % 2)));
}
