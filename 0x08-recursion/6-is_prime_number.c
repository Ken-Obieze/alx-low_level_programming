#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to test
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (f_is_prime_number(n, n - 1));
}
/**
 * f_is_prime_number - performs prime number check
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime else 0
 */

int f_sqrt_recursion(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (i);
	return (f_is_prime_number(n, i--));
}
