#include "main.h"
/**
 * _strncpy - copies string 2 to string 1
 * @dest: destination string
 * @src: the source string
 * @n: amount
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
