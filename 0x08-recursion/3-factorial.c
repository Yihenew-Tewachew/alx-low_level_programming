#include "main.h"
/**
 * factorial - prints the factorial of number
 * @n: the number
 * Return: factorial
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	i = n * factorial(n - 1);
	return (i);
}
