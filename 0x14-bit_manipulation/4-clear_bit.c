#include "main.h"

/**
 * clear_bit - sets bit at index to zero
 * @n: number to alter
 * @index: position to alter
 * Return: 1 if scucessful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
