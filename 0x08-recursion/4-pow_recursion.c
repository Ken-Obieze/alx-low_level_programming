#include "main.h"

/**
 * _pow_recursion - return the value of x tothe power y
 * @x: the number to be raised
 * @y: the power to raise 
 * Return: result of operation or -1 if negative
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (n * _pow_recursion(x, y -1));
}
