#include "main.h"
/**
 * _strspn - function getting prefix index length
 * @s: string to be searched
 * @accept: prefix to which length is measured
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (0);
}
