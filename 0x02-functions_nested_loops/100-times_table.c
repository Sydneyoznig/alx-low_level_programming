#include "main.h"
/**
 * print_times_table - Print times table
 * @n : parameter
 * Return: nothing
 */
void print_times_table(int n)
{
	int num, mul, result;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				result = num * mul;
				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');
				if (result > 100)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result <= 100 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
