#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: Pointer to the string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip any non-numeric characters at the beginning of the string */
	while (*(s + i) < '0' || *(s + i) > '9')
	{
		if (*(s + i) == '-')
			sign *= -1;
		i++;
	}

	/* Convert the remaining characters to an integer */
	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
		result = result * 10 + (*(s + i) - '0');
		i++;
	}

	return result * sign;
}
