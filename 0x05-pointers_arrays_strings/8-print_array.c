#include "main.h"
#include <stdio.h>
/**
 * rint_array - prints arrays
 * @a: it is an array
 * @n: number of element
 * Return:0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
