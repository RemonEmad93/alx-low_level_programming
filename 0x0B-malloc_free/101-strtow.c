#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	k = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		len = 0;
		for (j = i; str[j] && str[j] != ' '; j++)
			len++;
		words[k] = malloc(sizeof(char) * (len + 1));
		if (words[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[k][j] = str[i + j];
		words[k][j] = '\0';
		k++;
		i += len;
	}
	words[k] = NULL;

	return (words);
}
