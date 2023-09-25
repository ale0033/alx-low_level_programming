/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing the characters to search for
 *
 * Return: The number of bytes in the initial segment of s that consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			return (count);
		count++;
	}

	return (count);
}
