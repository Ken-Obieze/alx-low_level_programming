#include "main.h"

/**
 * _strncpy - copy strings to another
 * @dest: original string
 * @src: string to be coppied
 * @n: conttrol bit
 * Return: Result of concacte
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[j]  != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
