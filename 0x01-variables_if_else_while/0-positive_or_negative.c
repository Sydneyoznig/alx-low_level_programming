#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * srand - Inbuilt function to generate random number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n")
	else if (n == 0)
		printf("is zero\n")
	else if (n < 0)
		prinf("is negative\n")
	return (0);
}
