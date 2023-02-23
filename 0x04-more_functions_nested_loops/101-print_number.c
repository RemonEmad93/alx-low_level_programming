#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1, i, digit, negative = 0;

	if (n < 0)
	{
		_putchar('-');
		negative = 1;
	}

	for (i = 0; n / divisor > 9 || n / divisor < -9; i++)
		divisor *= 10;

	for (; divisor != 0; divisor /= 10)
	{
		digit = n / divisor;
		if (negative)
			_putchar('0' - digit);
		else
			_putchar('0' + digit);

		n %= divisor;
	}
}
