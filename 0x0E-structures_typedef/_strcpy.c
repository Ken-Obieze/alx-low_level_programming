#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - return copy of str pointer
 * @dest: destination
 * @src: source
 * Return: destination pointer
 */

int *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
