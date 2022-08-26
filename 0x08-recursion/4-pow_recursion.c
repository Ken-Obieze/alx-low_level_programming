#include "main.h"

/**
 * factorial - return factorial of number
 * @n: number to calculate factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n -1));
}
