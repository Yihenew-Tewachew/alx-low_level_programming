#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int one = 0;
	int ten = 0;

	for (ten = 0; ten <= 9; ten++)
	{
		for (one = 0; one <= 9; one++)
		{
			if (!((one == ten) || (ten > one)))
			{
				putchar(ten + '0');
				putchar(one + '0');
				if (!(one == 9 && ten == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
