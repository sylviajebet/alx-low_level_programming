#include <stdio.h>

/**
  * main - Entry point for program to print 3 digit combos once
  *
  * Return: 0 for success
  */
int main(void)
{
	int num1, num2, num3;
	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				if ((num2 > num1) && (num3 > num2))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 == 55 && num2 == 56 && num3 == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
