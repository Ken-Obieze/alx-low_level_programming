#include "main.h"

/**
 * strtow - function splits strings into two words
 * @str: string to split
 * Return: poiner to array of strings else NULL
 */

char **strtow(char *str)
{
	char **grid, *tmp;
	int i, j, l = 0, wrd, c = 0, start, end;

	while (*(str + l))
		l++;
	wrd = wrd_count(str);
	if (wrd == 0)
		return (NULL);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == '' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char*)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				grid[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	grid[j] = NULL;
	return (grid);
}

/**
 * wrd_count - word counter
 * @s: string to count
 * Return: word count
 */

int wrd_count(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
