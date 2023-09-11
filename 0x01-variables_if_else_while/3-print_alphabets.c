#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp='a';
	int i;

	for (i = 0; i < 52; i++)
	{
		if(i > 26)
		{
			putchar(alp++);
		}
		else
		{
			alp= 'A';
			putchar(alp++);
		}
	}
	putchar('\n');
	return (0);
}
