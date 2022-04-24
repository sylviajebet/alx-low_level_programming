#include "main.h"

/**
 * infinite_add - Function that adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Integer result
 * @size_r: Integer result length
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int idx = 0, idx2 = 0, x, count = 0, i, j, sum = 0;

	while (n1[idx])
		idx++;
	while (n2[idx2])
		idx2++;
	if (idx > idx2)
		count = idx;
	else
		count = idx2;
	if (count + 1 > size_r)
		return (0);

	r[count] = '\0';
	idx--;
	idx2--;
	for (x = count - 1 ; x >= 0 ; x--, idx--, idx2--)
	{
		if (idx >= 0)
			i = n1[idx] - '0';
		else
			i = 0;
		if (idx2 >= 0)
			j = n2[idx2] - '0';
		else
			j = 0;
		r[x] = (i + j + sum) % 10 + '0';
		sum = (i + j + sum) / 10;
	}
	if (sum == 1)
	{
		r[count + 1] = '\0';
		if (count + 2 > size_r)
			return (0);
		while (count-- >= 0)
			r[count + 1] = r[count];
		r[0] = sum + '0';
	}

	return (r);
}
