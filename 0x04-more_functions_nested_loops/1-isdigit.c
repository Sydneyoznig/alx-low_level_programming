#include "main.h"
/**
 * _isdigit - Check if character is digit or not
 * @c: Input
 * Return: 1 if digit, and 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
