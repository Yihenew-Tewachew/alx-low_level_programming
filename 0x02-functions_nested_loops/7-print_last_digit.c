#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * @c: The number to be taken
 * Return: Last digit
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
