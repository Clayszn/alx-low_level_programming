#include "main.h"

/**
* _memcpy - copies to a memory address dest
* @dest: location to be copied into
* @src: source location
* @n: length of array
*
*Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
