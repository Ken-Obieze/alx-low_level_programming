#include "main.h"

/**
 * _sqrt_recursion - return natural root
 * @n: number to test
 * Return: natural root or -1 in case of error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (f_sqrt_recursion(n, 0));
}
/**
 * f_sqrt_recursion - performs recurion
 * @n: number to check
 * @i: iterator
 * Return: actual result or -1 in case of error
 */

int f_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (f_sqrt_recursion(n, i++));
}
