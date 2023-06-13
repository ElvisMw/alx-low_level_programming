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
	char *concatenated;
	int len1 = 0, len2 = 0, i, e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (e = 0; e < len2; e++)
		concatenated[i + e] = s2[e];

	concatenated[i + e] = '\0';
	return (concatenated);
}
