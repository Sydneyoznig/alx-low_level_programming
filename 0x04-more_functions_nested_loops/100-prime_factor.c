#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Success
 */
int main(void)
{
	long number = 612852475143;
	int count;

	while (count++ < number / 2)
	{
		if (number % count == 0)
		{
			number /= 2;
			continue;
		}
		for (count = 3; count < number / 2; count += 2)
		{
			if (number % count == 0)
				number /= count;
		}
	}
	printf("%ld\n", number);
	return (0);
}
