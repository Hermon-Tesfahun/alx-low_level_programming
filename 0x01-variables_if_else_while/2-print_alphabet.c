#include <stdio.h>

/**
 * main - Print  alphabet.
 *
 * Return: 0 if Successful
 */
int main(void)
{
	char alp = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp++);
	}
	putchar('\n');
	return (0);
}

