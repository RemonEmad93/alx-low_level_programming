#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 5 // define a constant for the length of the password

/**
 * main - Generates a random 5-digit number as a password.
 *
 * Return: Always 0.
 */
int main(void)
{
	int password[PASSWORD_LENGTH];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 10;
	}

	printf("Random Password: ");
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		printf("%d", password[i]);
	}
	printf("\n");

	return (0);
}
