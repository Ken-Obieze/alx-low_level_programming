#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for integer
 * @array: array to search
 * @size: size of array to search
 * @cmp: pointer to comparing function
 * Return: areturns cmp or -1 if code cannot complete
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
