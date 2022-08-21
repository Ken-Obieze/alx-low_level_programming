#include "main.h"

/**
 * *_strcpy - copies string to pointer
 * @dest: buffer pointer
 * @src: string to be copied
 * Return: destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, len;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;

	for (j = 0; j < len; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
