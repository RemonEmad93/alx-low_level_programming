#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate over the string, printing every other character */
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}

	_putchar('\n');
}
