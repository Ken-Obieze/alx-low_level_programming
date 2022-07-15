#include "main.h"

/**
 * string_toupper - changes lowercase to upper
 * @s: input string
 * Return: pointer to converted uppercase
 */

char *string_toupper(char *s)
{
	char *upper = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (upper);
}
