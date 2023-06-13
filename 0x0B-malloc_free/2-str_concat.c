#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins two strings
 * @s1: string one
 * @s2: string two
 * Return: on success pointer to allocated memory or 0/NULL upon failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, letty;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[letty] != '\0')
		letty++;
	conct = malloc(sizeof(char) * (i + letty + 1));

	if (conct == NULL)
		return (NULL);
	i = letty = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[letty] != '\0')
	{
		conct[i] = s2[letty];
		i++, letty++;
	}
	conct[i] = '\0';
	return (conct);
}
