#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determines if number is positive negative or zero
 *
 * return: 0 (on sucess)
 */
int main(void)
	/*returns : 0 on success */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
