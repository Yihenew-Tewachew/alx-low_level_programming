#include <stdio.h>
/**
 * main - Prints letters in order
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
