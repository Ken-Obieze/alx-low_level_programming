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
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);

	if (size == 0)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
