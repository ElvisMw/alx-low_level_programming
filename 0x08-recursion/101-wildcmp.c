#include "main.h"

/**
 * wildcmp_letty - makes comparison of the two strings by recurssion
 * @s1: first string entry
 * @s2: second string
 * Return: 1
 */
int wildcmp_letty(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (wildcmp_letty(s1, s2 + 1))
		{
			return (1);
		}

		if (*s1 != '\0' && wildcmp_letty(s1 + 1, s2))
		{
			return (1);
		}
	}
}
/**
 * wildcmp - compares two strings
 * Return: 1 or 0 if identical or not respectively
 * @s1: string one
 * @s2: string two
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return ((*s1 == '\0') ? 1 : 0);
	}

	return (wildcmp_letty(s1, s2));
}
