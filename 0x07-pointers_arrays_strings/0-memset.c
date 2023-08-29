#include "main.h"

/**
* _memset - entry point of the program
* @s: pointer that will be returned into
* @b: constant byte to be returned
* @n: the bytes to be filled
*
* Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
