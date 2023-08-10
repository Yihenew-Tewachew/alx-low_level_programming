#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - returns pointer or exit with status 98
 * @b: the integer argument
 * Return: pointer or exit
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
