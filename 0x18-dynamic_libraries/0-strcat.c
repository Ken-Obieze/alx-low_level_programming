#include "main.h"

/**
 * _strcat - joins strings together
 * @dest: original string
 * @src: string to be appended
 * Return: Result of concactenation
 */

char *_strcat(char *dest, char *src)
{
	int i,  j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j]  != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
