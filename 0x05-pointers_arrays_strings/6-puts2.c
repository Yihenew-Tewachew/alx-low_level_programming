#include "main.h"
/**
 * puts2 - prints multiples of 2
 * @str: a string to be concidered
 * Return:0
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	int k;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	for (k = 0; k < j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
