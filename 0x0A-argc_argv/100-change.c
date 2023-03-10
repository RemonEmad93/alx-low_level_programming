#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - calculates the minimum number of coins to make change
 * for an amount of money
 * @cents: the amount of money in cents
 *
 * Return: the minimum number of coins
 */
int min_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		coins++;
	}

	return (coins);
}

/**
 * main - the entry point of the program
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int cents, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		cents = 0;

	num_coins = min_coins(cents);

	printf("%d\n", num_coins);

	return (0);
}
