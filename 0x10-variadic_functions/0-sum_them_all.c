#include "variadic_functions.h"

/**
 * sum_them_all - summs all entered parameters
 * @n: number of parameters
 * Return: returns sum or 0 if parameters is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list list;

	if (n == 0)
		return(0);

	va_start (list, n);

	for (i = 0; i < n; i++)
		sum += va_arg (list, int);

	va_end (list);
	return (sum);
}
