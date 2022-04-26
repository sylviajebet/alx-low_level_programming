#include "main.h"

/**
  * set_string - Function that sets the value of a pointer to a char
  * @s: Pointer to pointer of string s
  * @to: Pointer to string
  * Return: Void
  */

void set_string(char **s, char *to)
{
	*s = to;
}
