#include "main.h"
/**
 * _pow_recursion - prints the power of number
 * @x: number
 * @y: power
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	i = x * _pow_recursion(x, y - 1);
	return (i);
}
