#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function allocating memory size
 * @nmemb: elemnts
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
