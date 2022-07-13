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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(",%d", a[i]);
	}
	printf('\n');
}
