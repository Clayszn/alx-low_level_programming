#include "main.h"

/**
 * get_endianness - get endianness
 * Return: 0 and 1
 */

int get_endianness(void)
{
	unsigned int z = 1
		char *q = (char *) &z;
	return (*q);
}
