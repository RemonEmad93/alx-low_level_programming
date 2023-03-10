#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, calculates minimum coins for change
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check if the number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	cents = atoi(argv[1]);

	/* Check if the number is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the number of coins needed */
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}

	/* Print the number of coins needed */
	printf("%d\n", coins);

	/* Return success */
	return (0);
}
