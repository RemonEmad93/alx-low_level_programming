#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * print_error - Prints an error message and exits with status 98
 */
void print_error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of num1 and num2
 */
int *multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));

    if (result == NULL)
        return NULL;

    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int x = num1[i] - '0';

        for (int j = len2 - 1; j >= 0; j--)
        {
            int y = num2[j] - '0';
            int z = result[i + j + 1] + x * y + carry;

            result[i + j + 1] = z % 10;
            carry = z / 10;
        }

        result[i] += carry;
    }

    return result;
}

/**
 * print_number - Prints a number represented as an array of digits
 * @num: The number to print
 * @len: The length of the array
 */
void print_number(int *num, int len)
{
    int i = 0;

    while (i < len && num[i] == 0)
        i++;

    if (i == len)
        putchar('0');
    else
    {
        for (; i < len; i++)
            putchar(num[i] + '0');
    }

    putchar('\n');
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
    char *num1, *num2;
    int *result;

    if (argc != 3)
        print_error();

    num1 = argv[1];
    num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++)
        if (!_isdigit(num1[i]))
            print_error();

    for (int i = 0; num2[i] != '\0'; i++)
        if (!_isdigit(num2[i]))
            print_error();

    result = multiply(num1, num2);

    if (result == NULL)
        return 1;

    print_number(result, _strlen(num1) + _strlen(num2));

    free(result);

    return 0;
}
