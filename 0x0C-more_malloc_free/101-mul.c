#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _memset - Function that fills memory with a constant byte
  * @s: Pointer to memory
  * @b: Constant byte
  * @n: Integer, number of bytes
  * Return: Pointer to memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - Function that allocates memory for an array, using _memset
 *
 * @nmemb: Int for number of elements in the array
 * @size: Int for size of each element in the array
 * Return: Pointer value to the allocated memory, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);

	return (arr);
}

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
