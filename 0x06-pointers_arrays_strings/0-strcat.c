#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	/* Calculate the length of the destination string using a while loop */
	while (dest[c])
		c++;

	/*
	 * Use a for loop to copy characters from src to dest,
	 * starting from the end of dest
	 */
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}

