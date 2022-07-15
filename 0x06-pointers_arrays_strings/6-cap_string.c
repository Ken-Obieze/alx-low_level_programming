#include "main.h"

/**
 * cap_string - functio capitalised words of a string
 * @c: string to capitalise
 * Return: capitalised string
 */

char *cap_string(char c)
{
	int i = 0;
	int prev;

	for (i = 0; c[i] != '\0'; i++)
	{
		prev = i - 1;
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
				c[i] = c[i] - 32;
			else if (c[prev] >= 9 && c[prev] <= 10)
				s[i] = c[i] - 32;
			else if (c[prev] >= 32 && c[prev] <= 34)
				c[i] = c[i] - 32;
			else if (c[prev] >= 40 && c[prev] <= 41)
				c[i] = c[i] - 32;
			else if (c[prev] == 46)
				c[i] = c[i] - 32;
			else if (c[prev] == 59)
				c[i] = c[i] - 32;
			else if (c[prev] == 123 || c[prev] == 125)
				c[i] = c[i] - 32;
		}
	}

	return (c);
}
