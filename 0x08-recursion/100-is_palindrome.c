#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);
	if (length <= 1) /* base case: s is a single character or empty */
		return (1);
	else if (s[0] != s[length - 1]) /* base case: first and last characters don't match */
		return (0);
	else /* recursive case: substring between first and last characters is a palindrome */
	{
		s[length - 1] = '\0'; /* remove last character */
		return (is_palindrome(s + 1));
	}
}
