#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	/* Check if the character is within the range of digits */
	if (c >= '0' && c <= '9')
	{
		/* Return 1 if the character is a digit */
		return (1);
	}
	else
	{
		/* Return 0 if the character is not a digit */
		return (0);
	}
}
