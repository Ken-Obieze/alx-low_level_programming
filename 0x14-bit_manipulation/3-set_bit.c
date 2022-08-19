#include "main.h"

/**
 * set_bit - set value of a bit to 1
 * @n: number to modify
 * @index: position to modify
 * Return: 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
