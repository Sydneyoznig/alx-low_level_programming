#include "main.h"
/**
 * print_sign - Prints + or - or zero
 * Return: 1 great than zero, zero is zero
 * -1 less than zero
 * @n: Integer input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
