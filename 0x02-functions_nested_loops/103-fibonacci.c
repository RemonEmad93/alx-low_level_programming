#include <stdio.h>

/**
 * main - Entry point, prints sum of even-valued terms in Fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2, c, sum = 2;

	while (b < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (b % 2 == 0)
		{
			sum += b;
		}
	}

	printf("%d\n", sum);

	return (0);
}
