#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	/* Check if any numbers were passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through all arguments */
	for (i = 1; i < argc; i++)
	{
		/* Loop through each character of the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Check if the character is not a digit */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	/* Return success */
	return (0);
}
