#include <stdio.h>

/**
 * main - prints the name of the program and the number of arguments
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/* Print the name of the program */
	printf("Program name: %s\n", argv[0]);

	/* Print the number of arguments */
	printf("Number of arguments: %d\n", argc - 1);

	/* Return success */
	return (0);
}
