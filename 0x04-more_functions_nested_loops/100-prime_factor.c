#include <stdio.h>

/**
 *main - Program to print largest prime facter of 612852475143.
 *
 *Return: 0 for success
 */

int main(void)
{
	long int num, i, pf;

	pf = -1;
	num = 612852475143;

	while (num % 2 == 0)
	{
		pf = 2;
		num /= 2;
	}
	for (i = 3; i <= num / 2; i = i + 2)
	{
		while (num % i == 0)
		{
			pf = i;
			num /= i;
		}
	}
	if (num > 2)
		pf = num;

	printf("%ld\n", pf);
	return (0);
}
