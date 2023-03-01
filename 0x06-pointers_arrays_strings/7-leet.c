#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}

	return (s);
}
