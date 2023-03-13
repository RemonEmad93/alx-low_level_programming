#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int count_words(char *str);
char *get_word(char *str);
int get_word_length(char *str);

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, word_count = 0, word_length;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (*str == ' ')
			str++;

		word_length = get_word_length(str);
		words[i] = get_word(str);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		str += word_length;
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			count++;
			while (*str != ' ' && *str != '\0')
				str++;
		}
		else
		{
			str++;
		}
	}

	return (count);
}

/**
 * get_word - extracts a single word from a string
 * @str: string to extract word from
 *
 * Return: pointer to the extracted word
 */
char *get_word(char *str)
{
	char *word;
	int i, length;

	length = get_word_length(str);

	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[i];

	word[i] = '\0';
	return (word);
}

/**
 * get_word_length - gets the length of a single word in a string
 * @str: string to get word length from
 *
 * Return: length of the word
 */
int get_word_length(char *str)
{
	int length = 0;

	while (*str != ' ' && *str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
