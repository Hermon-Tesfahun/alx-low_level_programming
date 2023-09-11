#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Check if a number n is positive, negative or zero.
 *
 * Return: Returns 0 if the program is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

