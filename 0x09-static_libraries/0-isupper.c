#include "main.h"
/**
 * _isupper - checkes if a character is upper
 * @c: Acharacter to be checked
 * Return: 1 if it is upper and 0 for others
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
