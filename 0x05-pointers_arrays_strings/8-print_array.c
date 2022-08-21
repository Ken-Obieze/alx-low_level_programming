#include <stdio.h>
#include "main.h"

/**
 * print_array - returns array list
 * @a: array parameter
 * @n: array parameter
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf(" %d", a[i]);
		else
			printf(", i%d", a[i]);
	}
	printf("\n");
}
