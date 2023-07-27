#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates string 2 to string 1
 * @dest: destination string
 * @src: souce string to be copied
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
