#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 */
void _puts(char *s)
{
	while (*s)
		putchar(*s++);
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
	_puts("Error");
	putchar('\n');
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2;

	if (argc != 3 || !_isnumber(argv[1]) || !_isnumber(argv[2]))
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	char *product = multiply(num1, num2);

	if (product == NULL)
		return (1);

	printf("%s\n", product);
	free(product);

	return (0);
}
