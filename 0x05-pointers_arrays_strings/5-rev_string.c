#include "main.h"

/**
 * rev_string - reverses given string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	int len = 0;
	int nlen = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	nlen = len - 1;

	for (j = 0; j < len; j++)
	{
		temp = s[j];
		s[j] = s[nlen];
		s[nlen--] = temp;
	}
}
