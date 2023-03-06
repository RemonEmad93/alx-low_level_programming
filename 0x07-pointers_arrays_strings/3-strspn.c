#include <main.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string of characters to match
 *
 * Return: number of bytes in the initial segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				len++;
				break;
			}
		}

		if (*(accept + j) == '\0')
			break;
	}

	return (len);
}
