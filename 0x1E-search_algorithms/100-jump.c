#include "search_algos.h"

/**
 * jump_search - uses jumpstart algotrithm to search a sorted list
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t str, end, step;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);

	str = 0, end = step;

	while (str < size)
	{
		printf("Value checked array[%lu] = [%d]\n", str, array[str]);
		if (end < size)
		{
			if (array[str] == value && value == array[end])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", str, end);
				break;
			}
		} else
		{
			if (array[str] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", str, end);
				break;
			}
		}
		str = end;
		end = str + step;
		}
	while (str <= end)
	{
		if (str == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", str, array[str]);
		if (array[str] == value)
			return (str);
		str++;
	}
	return (-1);
}
