#include "main.h"

/**
 * print_buffer - prints the content of size bytes of the buffer pointed by b
 * @b: pointer to buffer
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	/* iterate over the buffer */
	for (i = 0; i < size; i += 10)
	{
		/* print the position of the first byte of the line in hexadecimal */
		printf("%08x: ", i);

		/* print the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space */
		for (j = 0; j < 10; j++)
		{
			if (j + i >= size) /* end of buffer */
				printf("  ");
			else
				printf("%02x", *(b + i + j));

			if (j % 2 == 1) /* add space every two bytes */
				printf(" ");
		}

		/* print the content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (j + i >= size) /* end of buffer */
				break;

			/* if the byte is a printable character, print the letter, if not, print . */
			if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
				printf("%c", *(b + i + j));
			else
				printf(".");
		}

		printf("\n"); /* end of line */	
	}

	if (size <= 0) /* output a new line if size is 0 or less */
		printf("\n");
}
