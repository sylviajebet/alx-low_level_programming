#include "main.h"

/**
  * jack_bauer - Program to print every minute of the day by Jack Bauer
  *
  * Return: void for success
  */
void jack_bauer(void)
{
	int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max = 58;

	for (hours_tens = 0; hours_tens < 3; hours_tens++)
	{
		if (hours_tens == 2)
			hours_max = 4;
		for (hours_ones = 0; hours_ones < hours_max; hours_ones++)
		{
			for (minutes_tens = 0; minutes_tens < 6; minutes_tens++)
			{
				for (minutes_ones = 0; minutes_ones < 58; minutes_ones++)
				{
					_putchar(hours_tens);
					_putchar(hours_ones);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_ones);
					_putchar('\n');
				}
			}
		}
	}
}
