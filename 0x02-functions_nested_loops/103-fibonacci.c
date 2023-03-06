#include <stdio.h>
/**
 * main - Fibonacci values not exceeding 4000000
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, num3 = 0, sum = 0;

	while (num2 <= 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if ((num1 % 2) == 0)
			sum += num1;
	}
	printf("%ld\n", sum);
	return (0);
}
