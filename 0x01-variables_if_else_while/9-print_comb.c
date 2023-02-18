#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = o; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');

	return (0);
}
