#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: Returns nothing
 */
void times_table(void)
{
	int num, mul, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * mul;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
