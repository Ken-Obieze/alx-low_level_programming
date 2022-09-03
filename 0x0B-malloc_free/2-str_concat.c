#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @s3: result of concatenation
 * Return: pointer to new string else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j = 0, k = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if  (s3 == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < l1; i++)
		{
			s3[i] = s1[i];
			k++;
		}
	}

	if (s2)
	{
		while (k < (l1 + l2))
		{
			s3[k] = s2[i];
			k++;
			j++;
		}
	}
	s3[k] = '\0';

	return (s3);
}


