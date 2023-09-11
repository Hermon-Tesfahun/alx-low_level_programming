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

	for (i = 0; i < 26; i++)
	{
		putchar(alp++);
	}
	alp='A';
	for (j = 0; j < 26; j++)
        {
       		putchar(alp++);
	}
	putchar('\n');
	return (0);
}
