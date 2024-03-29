#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if the number of arguments is not correct, 2 if the number of bytes is negative
 */
int main(int argc, char **argv)
{
    int i, num_bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    unsigned char *ptr = (unsigned char *)main;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", *ptr);
        ptr++;
    }

    printf("\n");

    return (0);
}
