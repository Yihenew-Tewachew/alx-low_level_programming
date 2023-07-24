#include "main.h"
/**
 * swap_int - a function swaps two variables
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;

}
