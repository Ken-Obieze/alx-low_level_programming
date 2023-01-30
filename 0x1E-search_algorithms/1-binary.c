#include <search_algos.h>

/**
 * binary_search - searches for value in array using binary search
 * @array: array to sarch value
 * @size: size of array
 * @value: value to look for
 * Return: index of value or -1 if null
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (help_bin(array, value, 0, size - 1));
}

/**
 * help_bin - searches for value recurcively
 * @array: array to sarch value
 * @value: value to look for
 * @lo: lower bound index
 * @hi: higher bound index
 * Return: index of found value, -1 if null
 */

int help_bin(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	array_print(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (help_bin(array, value, mid + 1, hi));
	if (array[mid] > value)
		return (help_bin(array, value, lo, mid + 1));
	return (-1);
}

/**
 * array_print - prints array
 * @array: array to print
 * @lo: lower bound index
 * @hi: index at higher bound
 */

void array_print(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array:");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(",");
	}
	printf("\n");
}
