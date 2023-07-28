#include "main.h"
/**
 * reverse_array - reverses integer array
 * @a: integer array
 * @n: number of element
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
