#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - prints the pointer on success or exit with 98
 * @b: an integer
 * Return: pointer or exit 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
