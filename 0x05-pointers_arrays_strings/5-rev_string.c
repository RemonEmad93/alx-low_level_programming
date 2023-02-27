#include "main.h"

/**
 * rev_string - Reverses a string in place
 *
 * @s: Pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	/* Get the length of the string */
	while (*(s + len) != '\0')
		len++;

	/* Reverse the string */
	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
