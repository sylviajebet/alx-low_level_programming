#include <stdio.h>

/**
 * print_buffer - Function that prints a buffer
 * @b: Buffer to print
 * @size: Size of buffer
 * Return: Void
 */

void print_buffer(char *b, int size)
{
	int idx, x;

	if (size <= 0)
		printf("\n");
	else
	{
		for (idx = 0; idx < size; idx += 10)
		{
			printf("%08x: ", idx);
			for (x = 0; x < 10; x++)
			{
				if (x % 2 == 0 && x != 0)
					printf(" ");
				if ((x + idx) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[idx + x]);
			}
			printf(" ");

			for (x = 0; x < 10; x++)
			{
				if ((x + idx) > size - 1)
					break;
				if (b[x + idx] <= 31 || b[x + 1] >= '~')
					b[x + idx] = '.';
				putchar(b[x + idx]);
			}
			printf("\n");
		}
	}
}
