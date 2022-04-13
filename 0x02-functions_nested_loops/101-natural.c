#include <stdio.h>

/**
  * main - Program to compute sum of multiples of 3 or 5 below 1024
  *
  * Return: 0 for success
  */
int main(void)
{
	unsigned long int sum = 0, sum3 = 0, sum5 = 0;
	int num;

	for (num = o; num < 1024; num++)
	{
		if ((num % 3) == 0)
			sum3 += num;
		else if ((num % 5) == 0)
			sum5 += num;
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
