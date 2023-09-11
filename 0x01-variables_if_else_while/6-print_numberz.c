#include <stdio.h>

/**
 * main - Print numbers from 0 to 9.
 *
 * Return: Returns 0 if the program is successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
