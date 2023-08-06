#include "main.h"
/**
 * _islower - checks if the char is lowercase
 * @c: The character to be checked
 * Return: 1 for lowercase 0 for others
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
