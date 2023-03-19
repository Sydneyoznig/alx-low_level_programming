#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 ten times
 * Return: 0 Success
 */
void more_numbers(void)
{
	int count, number;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar(10);
	}
}
