#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	if (length <= 1) /* base case: s is a single character or empty */
		return (1);
	else if (s[0] != s[length - 1]) /* base case: first and last characters don't match */
		return (0);
	else /* recursive case: check if the substring between first and last characters is a palindrome */
	{
		s[length - 1] = '\0'; /* remove last character */
		return (is_palindrome(s + 1));
	}
}
