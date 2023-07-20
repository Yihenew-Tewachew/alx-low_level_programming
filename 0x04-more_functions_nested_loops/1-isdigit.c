#include "main.h"
/**
 * _isdigit - checks if number is between 0 and 9
 * @c: the number to be checked
 * Return: 1 for those numbers and 0 for others
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
