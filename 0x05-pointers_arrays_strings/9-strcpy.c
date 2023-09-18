#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int end = 0;
	int i = 0;

	while (*(src + end) != '\0')
	{
		end++;
	}
	for ( ; i < l ; i++)
	{
		dest[i] = src[i];
	}
	dest[end] = '\0';
	return (dest);
}
