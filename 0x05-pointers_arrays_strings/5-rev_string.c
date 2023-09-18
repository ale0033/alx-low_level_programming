#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int l;
	int i;
	char temp;

	/* Calculate the length of the string */
	for (l = 0; s[l] != '\0'; ++l)
		;

	/* Reverse the string using for loops */
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}

