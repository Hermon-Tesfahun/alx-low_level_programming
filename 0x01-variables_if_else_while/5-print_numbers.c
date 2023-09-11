#include <stdio.h>

/**
 * main - Print numbers from 0 to 9.
 *
 * Return: returns 0 if the program is Succesful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return(0);
}
