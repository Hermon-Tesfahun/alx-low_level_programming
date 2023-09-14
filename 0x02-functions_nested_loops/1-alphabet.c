#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char alp = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp++);
	}
	_putchar('\n');
}
