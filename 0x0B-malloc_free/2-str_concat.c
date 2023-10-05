#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: input one to concatinate
 * @s2: input two to concatinate
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, conci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = conci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[conci] != '\0')
		conci++;
	conct = malloc(sizeof(char) * (i + conci + 1));

	if (conct == NULL)
		return (NULL);
	i = conci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[conci] != '\0')
	{
		conct[i] = s2[conci];
		i++, conci++;
	}
	conct[i] = '\0';
	return (conct);
}

