#include "main.h"
#include <stdlib.h>

/**
 * mul_numbers - Program that multiplies two positive numbers
 *
 * @num1: Int value of first integer
 * @num2: Int value of second integer
 * Return: Prints multiplication result, otherwise exit with 98
 */

void mul_numbers(unsigned int num1, unsigned int num2)
{
	unsigned int mul;

	mul = num1 * num2;
	_putchar(mul);
}
