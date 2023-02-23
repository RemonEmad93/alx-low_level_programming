#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Print nums 0 to 9, excluding 2 and 4, followed by line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}
