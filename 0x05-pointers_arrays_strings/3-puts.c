#include "main.h"

/**
 * _puts - Prints a string to stdout
 *
 * @str: Pointer to a string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
