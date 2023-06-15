#include <stdlib.h>
#include "main.h"

int count_words(char *str);
int word_length(char *str);
char *copy_word(char *str, int length);

/**
 * strtow - Separates a string into words
 * @str: String to separate
 *
 * Return: Pointer to string array
 */
char **strtow(char *str)
{
	int i, l, e, words;
	char **words_arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	words_arr = malloc(sizeof(char *) * (words + 1));
	if (words_arr == NULL)
		return (NULL);

	for (i = 0, l = 0; i < words; i++)
	{
		while (str[l] == ' ')
			l++;

		e = word_length(&str[l]);
		words_arr[i] = copy_word(&str[l], e);

		if (words_arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(words_arr[i]);
			free(words_arr);
			return (NULL);
		}

		l += e;
	}

	words_arr[i] = NULL;
	return (words_arr);
}

/**
 * count_words - identifies word number in a string
 * @str: String to count words from
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i, count = 0;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
				count++;
		}

		return (count);
}

/**
 * word_length - Calculates the length of a word
 * @str: String holding the word
 *
 * Return: The length of the word
 */
int word_length(char *str)
{
	int length = 0;

	while (str[length] != ' ' && str[length] != '\0')
		length++;

	return (length);
}

/**
 * copy_word - Copies word from string
 * @str: String holding word
 * @length: The length of the word
 *
 * Return: Pointer to the copied word
 */
char *copy_word(char *str, int length)
{
	int i;
	char *word;

	word = malloc(sizeof(char) * (length + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[i];

	word[i] = '\0';
	return (word);
}
