#include "main.h"

/**
 * alloc_grid - return ointer to 2D array
 * @width: width of matrix
 * @height: height of matrix
 * Return: returns pointer to matrix else NULL
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (height <=0 || width <=0)
		return (NULL);

	p = (int**)malloc(sizeof(int*) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int*)mslloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for(j = 0; j <= i; j++)
				free(p[j]);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
