#include <stdio.h>

/**
 * main - Entry point, prints first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	int a = 1, b = 2, c;

	printf("%d, %d", a, b);
	for (count = 2; count < 50; count++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
