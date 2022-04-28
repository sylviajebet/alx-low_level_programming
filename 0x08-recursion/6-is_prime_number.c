#include "main.h"

/**
 * _get_prime - Function to check if an int is a prime number
 * @n: Integer to check if prime
 * @prime: Integer to help check
 * Return: 1 if prime, 0 otherwise
 */

int _get_prime(int n, int prime)
{
	if (prime >= n)
		return (1);
	if (n % prime == 0)
		return (0);
	return (_get_prime(n, prime + 1));
}

/**
 * is_prime_number - Function to check if a number s a prime number
 * @n: Integer value to check if prime
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (_get_prime(n, 2));
}
