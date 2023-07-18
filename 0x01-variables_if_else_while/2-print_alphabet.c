#include <stdio.h>
/**
 * main - Prints letters in order
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
