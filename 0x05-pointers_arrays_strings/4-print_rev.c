#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int stringLength = 0;
	int i;

	while (*s != '\0')
	{
		stringLength++;
		s++;
	}
	for (i = stringLength; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
	
}
