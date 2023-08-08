#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of command line arguments
 * @argv: array of command line argument
 * Return: 0
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
