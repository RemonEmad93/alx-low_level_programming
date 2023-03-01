#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if it can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, sum, carry;

	/* calculate the length of the two input strings */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* make sure the buffer is big enough to hold the result */
	if (size_r <= len1 || size_r <= len2)
		return (0);

	/* start at the end of both strings and work backwards, adding digits */
	carry = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		sum %= 10;
		r[i + j + 1] = sum + '0';
	}

	/* if there is still a carry left over, add it to the front of the result */
	if (carry)
	{
		if (len1 + len2 + 1 >= size_r)
			return (0);
		for (i = len1 + len2; i >= 0; i--)
			r[i + 1] = r[i];
		r[0] = carry + '0';
	}

	return (r);
}
