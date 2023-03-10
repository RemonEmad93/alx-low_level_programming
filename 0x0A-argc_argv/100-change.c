#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints the minimum number of coins to make change for an
 * amount of money in cents using 25, 10, 5, 2, and 1 cent coins.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);

	return (0);
}
