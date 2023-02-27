#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character, followed by a new line
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (*(str + len) != '\0')
		len++;
	
	/* Print every other character */
	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));

	_putchar('\n');
}
