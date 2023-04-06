#include "main.h"

/**
 * is_prime_number - function that returns 1 if a number is a prime number, 
 * and 0 if otherwise
 * @n: number for input
 * Return: 0
 */

int is_prime_number(int n)

{
	return (prime_checker(n, 2, n / 2));
}

/**
 * prime_checker - blank
 * @n: checkl
 * @i: for the increment
 * @limit: stop
 * Return: 0
 */

int helper_prime(int n, int i, int limit)

{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= limit)
		return (helper_prime(n, i + 1, limit));
	else
		return (1);
}
