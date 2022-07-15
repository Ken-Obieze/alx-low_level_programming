#include "main.h"

/**
 * _strncat - joins strings together taking 
 * only specified number of bit from sourse
 * @dest: original string
 * @src: string to be appended
 * @n: conttrol bit
 * Return: Result of concactenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i,  j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j]  != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
