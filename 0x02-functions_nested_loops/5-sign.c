#include <stdio.h>
/**
 * print_sign - Prints + or - or zero
 * Return: 1 great than zero, zero is zero
 * -1 less than zero
 * @n: Integer input
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
