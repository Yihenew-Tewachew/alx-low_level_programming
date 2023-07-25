#include "main.h"
/**
 * _strlen - prints the length of string
 * @s: string whose length to be calculated
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
