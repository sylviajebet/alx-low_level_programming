#include "main.h"

/**
  * print_chessboard - Function that prints the chessboard
  * @a: Pointer to a 2-D array
  * Return: Void
  */

void print_chessboard(char (*a)[8])
{
	int idx, idx2;

	for (idx = 0; idx < 8; idx++)
	{
		for (idx2 = 0; idx2 < 8; idx2++)
			_putchar(a[idx][idx2];
	_putchar('\n');
	}
}
