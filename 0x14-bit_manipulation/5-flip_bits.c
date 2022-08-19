#include "main.h"

/**
 * flip_bits - counts number of bits to flip
 * @n: number to flip
 * @m: number flipped to
 * Return: altered bits count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int j, ex;

	ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = ex >> i;

		if (j & 1)
			count++;
	}
	return (count);
}
