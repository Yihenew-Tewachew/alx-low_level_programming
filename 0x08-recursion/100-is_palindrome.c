#include "main.h"
/**
 * strlen_recursion - gets the string length
 *  @s: the string
 *  Return: string length
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(s + 1));
}
/**
 * _compare_string - compares characters of the string
 * @s: the string
 * @i: the smallest interactor
 * @j: the largest interactor
 * Return: integer number
 */
int _compare_string(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + _compare_string(s, i + 1, j - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be tested
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare_string(s, 0, strlen_recursion(s) - 1));
}
