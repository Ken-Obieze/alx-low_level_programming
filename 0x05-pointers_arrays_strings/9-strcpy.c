#include "main.h"

/**
 * *_strcpy - copies string to pointer
 * @dest: buffer pointer
 * @src: string to be copied
 * Return: destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (j = 0; j < len / 2; j++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
