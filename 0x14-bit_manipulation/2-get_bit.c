#include "main.h"

/**
 * get_bit - set value of a bit to 1
 * @n: number to modify
 * @index: position to modify
 * Return: 1 if success else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
