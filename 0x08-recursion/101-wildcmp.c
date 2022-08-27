#include "main.h"

/**
 * wildcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are equal else 0
 */

int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp( s1 + 1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == '*')
	{
		s2 = move(s2);
		if (*s2 == '\0')
			return (1);
		if (*s1 == *s2)
			sum += wildcmp(s1 + 1, s2 + 1);
		sum += bsnatch(s1 + 1, s2);
		return (sum);
	}
}

/**
 * bsnatch - checks recursive for paths where character match
 * @s1: first string
 * @s2: second string
 * Return: value of comparison
 */

int bsnatch (char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmps(s1, s2));
	return (bsnatch(s1 + 1, s2);
}

/**
 * move - moves through *
 * @s2: iterator
 *Return: the addres of the char after
*/

char *move(char *s2)
{
	if (*s2 == '*')
		return (move(s2 + 1 );
	else
		return (s2);
}
