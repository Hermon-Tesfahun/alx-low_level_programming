#include "main.h"

/**
 * print_alphabet - print all alphabet(lowercase)
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp < 26; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
