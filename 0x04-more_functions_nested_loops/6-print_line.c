#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0) /* if n is 0 or less, only print a new line */
	{
		_putchar('\n');
		return;
	}

	/* print n number of underscores */
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n'); /* print a new line at the end */
}
