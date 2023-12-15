#include "main.h"

/**
* _strchr - acts as the main function
* @s: pointer that returns occurence
* @c: character that is returned
*
* Return: char
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (s);
}
