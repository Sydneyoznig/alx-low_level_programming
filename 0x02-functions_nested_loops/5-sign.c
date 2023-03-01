#include <stdio.h>
/**
 * print_sign - Prints + or - or zero
 * Return: 0 or 1 or -1
 * @n: Number for check
 */
int print_sign(int n)
{
	if (n == 0)
	{
		putchar(48);
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
