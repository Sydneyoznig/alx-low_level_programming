#include "main.h"
/**
 * print_square - Prints squares
 * @size: parameter
 * Return: nothing
 */
void print_square(int size)
{
	int hor, vet;

	if (size > 0)
	{
		for (hor = 0; hor < size; hor++)
		{
			for (vet = 0; vet < (size - 1); vet++)
				_putchar('#');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
