#include "main.h"
/**
 * print_diagonal - Print a diagonal line in terminal
 * @n: Parameter
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < 4; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
				_putchar('\\');
				if (len == (n - 10))
					continue;
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
