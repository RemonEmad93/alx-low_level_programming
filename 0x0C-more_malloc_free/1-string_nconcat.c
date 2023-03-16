#include "main.h"

#include <stdlib.h>

/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string to be measured
 *
 * Return: The length of the string
 */
unsigned int _strlen2(char *s)
{
        unsigned int len = 0;

        while (s[len])
                len++;

        return (len);
}

/**
 * string_nconcat - Concatenates two strings, up to the first n bytes of s2
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: If the function fails, it should return NULL.
 *         Otherwise - a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int s1_len, s2_len, i, j;
        char *concat_str;

        s1 = (s1 == NULL ? "" : s1);
        s2 = (s2 == NULL ? "" : s2);
        s1_len = _strlen2(s1);
        s2_len = _strlen2(s2);

        if (n >= s2_len)
                n = s2_len;

        concat_str = malloc(sizeof(char) * (s1_len + n + 1));

        if (concat_str == NULL)
                return (NULL);

        for (i = 0; s1[i] != '\0'; i++)
                concat_str[i] = s1[i];

        for (j = 0; j < n; j++)
                concat_str[i + j] = s2[j];

        concat_str[i + j] = '\0';

        return (concat_str);
}
