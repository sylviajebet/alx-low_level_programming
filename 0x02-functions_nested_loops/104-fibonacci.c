#include <stdio.h>

/**
  * main - Program to print the first 98 fibonacci numbers
  *
  * Return: 0 for success
  */
int main(void)
{
	int num, bef = 1, aft = 2, bef1, aft1, bef2, aft2, div = 1000000000;

	printf("%lu", bef);

	for (num = 0; num < 91; num++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = bef / div;
	bef2 = bef % div;
	aft1 = aft / div;
	aft2 = aft % div;

	for (num = 91; num < 99; num++)
	{
		printf(", %lu", aft1 + (aft2 / div));
		printf("%lu", aft2 % div);
		aft1 += bef1;
		bef1 = aft1 - bef1;
		aft2 += bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
