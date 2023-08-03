#include "main.h"
/**
 * sqrt_i - prints natural square root
 * @a: the number
 * @b: the operand
 * Return:square root
 */
int sqrt_i(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_i(a, b + 1));
}
/**
 * _sqrt_recursion - prints square root of number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_i(n, 0));
}
