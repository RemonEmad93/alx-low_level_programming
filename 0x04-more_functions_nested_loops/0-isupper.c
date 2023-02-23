#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* Check if the character is within the range of uppercase ASCII characters */
	if (c >= 'A' && c <= 'Z')
	{
		/* Return 1 if the character is uppercase */
		return (1);
	}
	else
	{
		/* Return 0 if the character is not uppercase */
		return (0);
	}
}
