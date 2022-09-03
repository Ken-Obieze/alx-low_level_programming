#include "main.h"

/**
 * _strdup - returns newly allocated memory space
 * @str: string to duplicate
 *
 * Return: pointer to copied string else NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	while ((p[i] = str[i]) != '\0')
		i++;

	return (p);
}
