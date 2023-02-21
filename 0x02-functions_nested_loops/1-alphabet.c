#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
}
