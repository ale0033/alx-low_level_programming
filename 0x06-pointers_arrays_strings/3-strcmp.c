#include "main.h"

/**
 * _strcmp - compares two strings as integers (assuming they are digits)
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = (((int)*s1 - 48) - ((int)*s2 - 48));
			break;
		}

		s1++;
		s2++;
	}

	return (result);
}

