#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to y
 * @x: Integer value to be raised
 * @y: Integer value of the power
 * Return: Value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
