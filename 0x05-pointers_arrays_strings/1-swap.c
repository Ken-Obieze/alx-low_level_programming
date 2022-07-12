#include "main.h"

/**
 * swap_int - swaps values of variables
 * @a: first variabke to swap
 * @b: second variabke to swap
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
