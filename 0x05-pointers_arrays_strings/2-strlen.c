#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string to return its lenght
 * Return: string length
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0')
		len++;

	return (len);
}
