#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc)
{
	/* Print the number of arguments */
	printf("%d\n", argc - 1);

	/* Return success */
	return (0);
}
