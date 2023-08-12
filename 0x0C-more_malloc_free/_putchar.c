#include "main.h"
/**
 * _putchar - prints character
 * @c: the character
 * Return: -1, 1 or charactwer
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
