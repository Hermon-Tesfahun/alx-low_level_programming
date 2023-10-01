#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer 
 * is a prime number, otherwise return 0
 * @n: number to be checked
 * Return: 1 if n is a prime number and if not 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_prime(n, n - 1));
}

/**
 * find_prime - calculates if a number is prime recursively
 * @n: number to be checked
 * @i: iterating number
 * Return: 1 if n is prime and if not 0
 */
int find_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (find_prime(n, i - 1));
}

