#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes c to the stdout
 * @c: the character to be printed
 * Return: 1 on success, -1 for error and 0
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
