#include "main.h"
/**
 * print_diagsums - prints sums of diagonals
 * @a: matrix
 * @size: size of matrix
 * Return : 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf ("%d, %d\n", sum1, sum2);
}
