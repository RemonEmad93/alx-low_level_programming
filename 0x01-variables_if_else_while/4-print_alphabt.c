#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char lettern = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putcher('\n');

	return (0);
}
