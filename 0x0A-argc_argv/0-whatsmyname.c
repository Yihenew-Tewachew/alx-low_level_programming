#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of commend line arguments
 * @argv: array of string containing arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
