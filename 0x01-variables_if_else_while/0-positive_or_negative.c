#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine if the random number iseither positive, negative or zero.
 *
 * return: 0 (on success)
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n < 0)
{
printf("%d is negative", n);
}
else if(n ==0)
{
printf("%d is zero", n)
}
else
{
printf("%d is positive", n)
}
	return (0);
}
