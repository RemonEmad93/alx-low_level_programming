#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to newly allocated space in memory
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
