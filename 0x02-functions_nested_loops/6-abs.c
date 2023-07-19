#include "main.h"
/**
 * _abs - Computes the absolute value
 * @c: The number to be computed
 * Return: Absolute vlue of number c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_vl = c * -1;

		return (abs_vl);
	}
	return (c);
}
