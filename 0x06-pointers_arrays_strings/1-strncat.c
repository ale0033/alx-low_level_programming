#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes from src to concatenate
 *
 * Return: a pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/* Find the length of dest */
	while (dest[c])
		c++;

	/* Append src to dest, up to the first n characters of src */
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}

