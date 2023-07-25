#include "main.h"
/**
 * puts2 - prints multiples of 2
 * @str: a string to be concidered
 * Return:0
 */
void puts2(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
