#include <stdio.h>

/**
 * count_args - counts the number of arguments passed to the program
 * @argc: the number of arguments passed
 *
 * Return: the number of arguments
 */
int count_args(int argc)
{
	return (argc - 1);
}

/**
 * main - the entry point of the program
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int num_args;

	num_args = count_args(argc);

	printf("%d\n", num_args);

	return (0);
}
