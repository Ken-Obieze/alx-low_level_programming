#include <stdio.h>

/**
 * main -  prints sum of even num in a fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, j, k, sum, n;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j <= 4000000 && (j % 2) == 0)
			sum += j;
		else
			printf("%ld\n", j);
		n = j + k;
		j = k;
		k = n
	}
	printf("%lu\n", sum);

	return (0);

}
