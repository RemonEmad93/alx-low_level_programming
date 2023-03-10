#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{

	int last_digit;

	if (n < 0)
	{
		n *= -1;
	}

	last_digit = n % 10;
	putchar(last_digit + '0');

	return (last_digit);
}
