#include "main.h"
/**
 * rot13 - encoder ROT13
 * @n: pointer
 * Return: 0
 */
char *rot13(char *n)
{
	int i;
	int j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == rot1[j])
			{
				n[i] = rot2[j];
				break;
			}
		}
	}
	return (n);
}
