#include "main.h"
/**
 * _strstr - function locating substring
 * @haystack: string for searching in
 * @needle: string to be searched
 * Return: string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
