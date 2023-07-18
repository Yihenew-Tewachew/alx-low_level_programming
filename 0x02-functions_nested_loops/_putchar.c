#include <unistd.h>
/**
 * _putchar - Prints the character c
 * @c:The character to be printed
 * Return : 1 on success
 * On error -1 is the return value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
