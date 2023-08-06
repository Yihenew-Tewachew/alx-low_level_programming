#include "main.h"
/**
 * _strpbrk - searches string for any string
 * @s: string to be searched
 * @accept: the set of bytes to be searched
 * Return: pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
