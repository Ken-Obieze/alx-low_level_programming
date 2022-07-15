#include "main.h"

/**
 * reverse_array - function reverss array content
 * @a: array
 * @n: array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
