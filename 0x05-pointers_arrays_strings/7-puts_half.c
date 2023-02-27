#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i = 0, n = 0;

	/* Get the length of the string */
	while (*(str + len) != '\0')
		len++;

	/* Calculate the number of characters to print */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	/* Print the second half of the string */
	for (i = n; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
