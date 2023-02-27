#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 *
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* Copy the contents of src to dest */
	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	/* Copy the terminating null byte */
	*(dest + i) = *(src + i);

	/* Return a pointer to the destination buffer */
	return (dest);
}
