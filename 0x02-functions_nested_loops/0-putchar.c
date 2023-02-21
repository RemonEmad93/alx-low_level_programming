#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str[] = "putchar\n";

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	return (0);
}
