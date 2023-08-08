#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to the copied string
 * @str: input string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *cpy;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	cpy = (char *)malloc((sizeof(char) * j) + 1);
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		cpy[i] = str[i];
	cpy[i] = '\0';
	return (cpy);
}
