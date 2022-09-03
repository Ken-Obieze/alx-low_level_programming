#include "main.h"

/**
 * argstostr - concatenates all argument of program
 * @ac: argument count
 * @av: argument array
 * Return: pointer to new string else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	p = malloc(sizeof(char) * (l + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
