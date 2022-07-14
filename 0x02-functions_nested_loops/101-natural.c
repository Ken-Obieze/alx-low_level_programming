#include <stdio.h>

/**
 * main - computes summ of all multiples
 * Return: Always zero
 */

int main(void)
{
	unsigned long int sum, sum3, sum5;
	int i;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 += i;
		}
		else if ((i % 5) == 0)
		{
			sum5 += i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);

}
