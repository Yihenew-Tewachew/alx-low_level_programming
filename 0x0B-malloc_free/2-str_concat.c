#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings and printto the new pointer
 * @s1: first input
 * @s2: second input
 * Return: new string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len1, len2, len;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0')
			len2++;
	}
	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];
	result[len] = '\0';
	return (result);
}
