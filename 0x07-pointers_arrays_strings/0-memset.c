#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The constant byte to fill with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *dest = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = b;
	}

	return (s);
}

