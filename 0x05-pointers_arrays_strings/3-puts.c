#include "main.h"
/**
 * _puts - prints a string
 * @s: a string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
