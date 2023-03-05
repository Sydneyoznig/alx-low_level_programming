#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Integer input
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		_putchar(-digit + 48);
		return (-digit);
	}
	else
	{
		_putchar(digit + 48);
		return (digit);
	}
}
