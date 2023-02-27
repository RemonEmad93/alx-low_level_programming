#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random 5-digit number as a password.
 *
 * Return: Always 0.
 */

int main(void)
{
	int password[8];
	int i, sum;

	srand(time(0)); /* Seed the random number generator */

	/* Generate random numbers for each digit of the password */
	for (i = 0; i < 8; i++)
	{
		password[i] = rand() % 10;
	}

	/* Calculate the sum of the digits */
	sum = 0;
	for (i = 0; i < 8; i++)
	{
		sum += password[i];
	}

	/* Print the password */
	printf("%d%d%d%d%d%d%d%d", password[0], password[1], password[2], password[3], password[4], password[5], password[6], password[7]);

	/* Print the sum of the digits */
	printf("%d\n", sum);

	return (0);
}
