#include "main.h"

/**
 *reverse_array - Function to reverese an array
 *@a: Pointer to array
 *@n: Integer of number of elements in an array
 *Return: Void
 */

void reverse_array(int *a, int n)
{
	int temp, count = 0;

	for (n--; n >= count; n--)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n] = temp;
	}
}
