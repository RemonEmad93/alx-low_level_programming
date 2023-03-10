#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Ensure that we received two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the numbers and print the result */
	result = num1 * num2;
	printf("%d\n", result);

	/* Return success */
	return (0);
}
