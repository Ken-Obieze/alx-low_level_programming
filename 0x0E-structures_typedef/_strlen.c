#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
