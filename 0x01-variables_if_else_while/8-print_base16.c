#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex = '0';

	while (hex <= 'f')
	{
		if ((hex >= '0' && hex <= '9') || (hex >= 'a' && hex <= 'f'))
		{
			putchar(hex);
		}
		hex++;
	}

	putchar('\n');
	return (0);
}

