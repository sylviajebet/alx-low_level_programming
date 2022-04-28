#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to a string
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}

/**
  * _get_palindrome - Function to check if string is a palindrome
  *@s: Pointer to string
  *@idx1: First index
  *@idx2: Second index
  *Return: 1 if palindrome, otherwise 0
  */

int _get_palindrome(char *s, int idx1, int idx2)
{
	if (idx1 < idx2 && s[idx1] == s[idx2])
		return (_get_palindrome(s, idx1 + 1, idx2 - 1));
	if (s[idx1] != s[idx2])
		return (0);
	return (1);
}

/**
 * is_palindrome - Function that checks if a string is a palindrome
 * @s: Pointer to string
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int _strlen;

	_strlen = _strlen_recursion(s);
	if (_strlen == 0)
		return (0);
	return (_get_palindrome(s, 0, _strlen - 1));
}
