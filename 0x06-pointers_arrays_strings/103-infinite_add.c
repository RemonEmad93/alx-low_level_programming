#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 *
 * @n1: the first number to add
 * @n2: the second number to add
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result or 0 if the result can not be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + len2 + 1 > size_r)
	{
		return 0;
	}

	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		i--;
		j--;
		k++;
	}

	for (int i = 0; i < k / 2; i++)
	{
		char temp = r[i];
		r[i] = r[k - i - 1];
		r[k - i - 1] = temp;
	}

	r[k] = '\0';

	return (r);
}
