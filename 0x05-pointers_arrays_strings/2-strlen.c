#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int counter;

	for (counter; *s != '\0'; s++)
		++counter;

	return (counter);
}

