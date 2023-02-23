#include "main.h"
/**
 * _islower - Check for lower case character
 * Return: 1 for lower case. 0 (Otherwise)
 * @c : ASCII code value
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
