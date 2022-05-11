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
 * mul_numbers - Program that initializes an array
 *
 * @str1: Array of first string
 * @str2: Array of second string
 * Return: Void
 */

void mul_numbers(char *str1, char *str2)
{
	char *arr;
	void *temp;
	int idx = 0, len1, len2, num1, num2, mul, tmp, total;

	while (str1[idx])
		idx++;
	len1 = idx;
	idx = 0;
	while (str2[idx])
		idx++;
	len2 = idx;
	tmp = len2;
	total = len1 + len2;
	arr = _calloc(sizeof(int), total);
	temp = arr;
	for (len1--; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		mul = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			mul += arr[len2 + len1 + 1] + (num1 * num2);
			arr[len1 + len2 + 1] = mul % 10;
			mul /= 10;
		}
		if (mul)
			arr[len1 + len2 + 1] = mul % 10;
	}
	while (*arr == 0)
	{
		arr++;
		total--;
	}
	for (idx = 0; idx < total; idx++)
		printf("%i", arr[idx]);
	printf("\n");
	free(temp);
}

/**
 * main - Program that multiplies two positive numbers
 * @argc: Argument count
 * @argv: Array of pointers to argument
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || (*num1 < '0' || *num1 > '9') || (*num2 < '0' || *num2 > '9'))
	{
		printf("Error\n");
		return (1);
	}

	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		mul_numbers(num1, num2);
	return (0);
}
