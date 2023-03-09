#include "main.h"

/**
 * is_prime_number - checks if a given integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2) /* base case: n is less than 2, which is not prime */
		return (0);
	else if (n == 2 || n == 3) /* base case: n is 2 or 3, which are prime */
		return (1);
	else /* recursive case: check if n is divisible by any number less than it */
		return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check if a given integer
 * @n: the integer to check
 * @divisor: the current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0) /* base case: n is divisible by the current divisor */
		return (0);
	else if (divisor * divisor > n) /* base case: all possible divisors tested */
		return (1);
	else /* recursive case: test the next possible divisor */
		return (is_prime_helper(n, divisor + 1));
}
