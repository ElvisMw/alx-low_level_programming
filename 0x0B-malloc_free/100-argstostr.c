#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, l, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		l = 0;
		while (av[i][l] != '\0')
		{
			len++;
			l++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		l = 0;
		while (av[i][l] != '\0')
		{
			str[k] = av[i][l];
			k++;
			l++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
