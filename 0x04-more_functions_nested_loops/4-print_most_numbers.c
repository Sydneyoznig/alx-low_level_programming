#include "main.h"
/**
 * print_most_numbers - Print numbers except 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}
