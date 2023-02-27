#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 *
 * @s: Pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Get the length of the string */
	while (*(s + len) != '\0')
		len++;

	/* Print the string in reverse */
	for (int i = len - 1; i >= 0; i--)
		putchar(*(s + i));

	putchar('\n');
}

