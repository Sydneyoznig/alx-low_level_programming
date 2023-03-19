#include "main.h"
/**
 * print_triangle - prints a triagle
 * @size: parameter
 * Return: Nothing
 */
void print_triangle(int size)
{
	int hor, vet;

	if (size > 0)
	{
		for (hor = 1; hor <= size; hor++)
		{
			for ((vet = size - hor); vet > 0; vet--)
				_putchar(' ');
			for (vet = 0; vet < hor; vet++)
				_putchar('#');
			if (hor == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
