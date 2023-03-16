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
	int i, j, len1, len2, carry, *result;
	char *num1, *num2;

	if (argc != 3)
		print_error();

	num1, num2 = argv[1], argv[2];

	len1, len2 = _strlen(num1), _strlen(num2);

	for (i = 0; i < len1; i++)
		if (!_isdigit(num1[i]))
			print_error();

	for (i = 0; i < len2; i++)
		if (!_isdigit(num2[i]))
			print_error();

	if (calloc(len1 + len2, sizeof(int)) == NULL)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		putchar('0');
	else
	{
		for (; i < len1 + len2; i++)
			putchar(result[i] + '0');
	}

	putchar('\n');

	free(result);
	return (0);
}
