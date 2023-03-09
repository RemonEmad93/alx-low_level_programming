#include "main.h"

/**
 * wildcmp - compares two strings, allowing the second string to contain a wildcard *
 * @s1: the first string to compare
 * @s2: the second string to compare, which may contain the wildcard *
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* base case: both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* check if the first characters of the strings match, or if s2 has a wildcard * */
	if (*s1 == *s2 || (*s2 == '*' && *s1 != '\0'))
	{
		/* if s2 has a wildcard *, recursively check if s1 matches the rest of s2 or if s1 matches the next character in s2 */
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		else /* recursively check if the rest of the strings match */
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else /* the characters don't match and s2 doesn't have a wildcard */
		return (0);
}
