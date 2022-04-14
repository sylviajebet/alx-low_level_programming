#include "main.h"

/**
 * more_numbers - Program to print 0 to 14 ten times
 *
 * Return: 0 for success
 */

void more_numbers(void)
{
	int num, count, rpt;

	for (count = 0; count < 10; count++)
	{
		for (rpt = 48; rpt < 50; rpt++)
		{
			for (num = 48; num < 58; num++)
			{
				if (rpt == 49)
					_putchar(rpt);
				while (rpt == 48 || (rpt == 49 && num < 53))
					_putchar(num);
			}
		}
		_putchar('\n');
	}
}
