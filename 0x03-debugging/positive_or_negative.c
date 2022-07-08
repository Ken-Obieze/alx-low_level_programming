#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - checks if number is positive or not
 * @i: the test value
 * Return: Always 0
 */

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
