#include "main.h"

/**
 * flip_bits - return num of bits needed to flip to get from one num to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
