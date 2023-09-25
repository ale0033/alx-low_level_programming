#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character c in s, or NULL
 * if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			result = s;
			break;
		}
	}

	return (result);
}

