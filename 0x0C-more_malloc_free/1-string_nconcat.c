#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: number of characters of the second str to be conc.
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j <= n)
		l = i + j;
	else
		l = i + n;
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[i];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = ('\0');
	return (s);
}
