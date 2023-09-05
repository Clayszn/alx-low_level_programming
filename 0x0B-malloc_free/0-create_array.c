#include "main.h"

/**
 * *create_array - create an array of chars
 * and initiailize with a specific char
 * @size: unsigned int
 * @c: char c
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
