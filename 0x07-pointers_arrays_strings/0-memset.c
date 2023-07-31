#include "main.h"
/**
 * _memset - function prints b
 * @s: memory area
 * @b: character to be copied
 * @n: number of times b to be copied
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
