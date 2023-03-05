#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: Returns nothing
 */
void times_table(void)
{
	int digit1, digit2, digit3, digit4;
	for (digit1 = 0; digit1 <= 2; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			for (digit3 = 0; digit3 <= 5; digit3++)
			{
				for (digit4 = 0; digit4 <= 9; digit4++)
				{
					if (digit1 >= 2 && digit2 >= 24)
						break;
					_putchar(digit1 + '0');
					_putchar(digit2 + '0');
					_putchar(':');
					_putchar(digit3 + '0');
					_putchar(digit4 + 48);
					_putchar('\n');
				}
			}
		}
	}
}
