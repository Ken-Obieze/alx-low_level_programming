#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimun range
 * @max: maximum range
 * @Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
