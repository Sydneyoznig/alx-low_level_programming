#include "main.h"
/*
 * print_numbers - print numbers from 0 - 9 function
 * Return: Nothing
 */
void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
