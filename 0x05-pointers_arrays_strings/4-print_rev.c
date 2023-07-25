#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n -= 1; n > 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
