#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 * @s: string to be measured.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int stringLength = 0;

	if (*s != '\0')
	{
		stringLength++;
		stringLength += _strlen_recursion(s + 1);
	}

	return (stringLength);
}
