#include "main.h"
/**
 * _isalpha - Checks if the letter if the letter is lower or uppercase
 * @c: Letter to be checked
 * Return: 1 if c is letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
