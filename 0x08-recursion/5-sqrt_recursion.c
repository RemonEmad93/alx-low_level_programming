#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* error case: n is negative */
		return (-1);
	else if (n == 0 || n == 1) /* base case: n is 0 or 1 */
		return (n);
	else /* recursive case: n is positive and greater than 1 */
		return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - helper function to calculate the natural square root of a number
 * @n: the number to calculate the square root of
 * @start: the starting point for the search
 * @end: the ending point for the search
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n) /* base case: mid is the natural square root of n */
		return (mid);
	else if (mid * mid > n) /* recursive case: search in lower half of range */
		return (sqrt_helper(n, start, mid - 1));
	else /* recursive case: search in upper half of range */
	{
		if ((mid + 1) * (mid + 1) > n) /* check for closest integer solution */
			return (mid);
		else
			return (sqrt_helper(n, mid + 1, end));
	}
}
