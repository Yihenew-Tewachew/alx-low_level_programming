#include "main.h"
/**
 * _strchr - function locating the character
 * @s: string under consideration
 * @c: the character to be to be searched
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
