#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet(lowercase)
 * then newline
 */
void print_alphabet_x10(void)
{
	char alp;
	int i;

	i = 0;

	while (i < 10)
	{
		alp  = 'a';
		for(; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		i++;
	}
}
