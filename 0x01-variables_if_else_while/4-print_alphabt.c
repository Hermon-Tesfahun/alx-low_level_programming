#include <stdio.h>

/**
 * main - Prints the alphabet except q & e
 *
 * Return: returns 0 if Successful
 */
int main(void)
{
	char alp = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alp != 'e' || alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}

