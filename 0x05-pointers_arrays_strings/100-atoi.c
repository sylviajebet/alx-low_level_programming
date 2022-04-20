#include "main.h"

/**
 * _atoi - Program to convert string to integer
 * @s: Pointer to the string
 * Return: The integer value of string
 */

int _atoi(char *s)
{
	unsigned int idx = 0, size = 0, p = 0, sign = 1, mul = 1, num;

	while (s[idx])
	{
		if (size > 0 && (s[idx] < '0' || s[idx] > '9'))
		{
			break;
		}

		if (s[idx] == '-')
		{
			sign *= -1;
		}

		if ((s[idx] >= '0') && (s[idx] <= '9'))
		{
			if (size > 0)
			{
				mul *= 10;
			}
			size++;
		}
		idx++;
	}

	for (num = idx - size; num < idx; num++)
	{
		p += ((s[num] - 48) * mul);
		mul /= 10;
	}

	return (p * sign);
}
