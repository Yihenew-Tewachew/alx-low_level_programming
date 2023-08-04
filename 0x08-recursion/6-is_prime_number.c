#include "main.h"
/**
 * check_prime - cheks if number is prime
 * @a: the number
 * @b: the divisor
 * Return: 0
 */
int check_prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a % b == 0)
	{
		return (1);
	}
	return (check_prime(a, b + 1));
}
/**
 * is_prime_number - checks if num is prime
 * @n: the number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
