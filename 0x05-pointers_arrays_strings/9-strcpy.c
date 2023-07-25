#include "main.h"
/**
 * *_strcpy - copies string 2 to string 1
 * @dest: destination string
 * @src: is the source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
