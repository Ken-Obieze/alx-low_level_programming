#include "main.h"

/**
 * create_array - creates array of char
 * @size: size of array
 * @c: character to initialize array
 * Return: pointer to array or NULL if error occurs
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);

	if (size == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	*(p + i) = '\0';

	return (p);
}
