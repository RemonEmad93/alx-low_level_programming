#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line
 *
 * @a: Pointer to an array of integers
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	/* Print the first element of the array */
	printf("%d", *(a + 0));

	/* Print the remaining elements of the array */
	for (i = 1; i < n; i++)
		printf(", %d", *(a + i));

	/* Print a newline character to move the cursor to the next line */
	printf("\n");
}
