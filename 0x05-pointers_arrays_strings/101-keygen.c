#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random 5-digit number as a password.
 *
 * Return: Always 0.
 */

#define PASSWORD_LENGTH 10
#define ASCII_RANGE_START 33
#define ASCII_RANGE_END 126

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = (char)(rand() % (ASCII_RANGE_END - ASCII_RANGE_START + 1) + ASCII_RANGE_START);
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
