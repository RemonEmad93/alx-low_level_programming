#include <stdio.h>

/**
 * main - Entry point, prints first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int i, count;
	unsigned int a = 1, b = 2, c;

	printf("%u, %u", a, b);
	for (count = 2; count < 98; count++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
