#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string length
 * Return: 0 always
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	if (s[0] == '\0')
		return (0);

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
