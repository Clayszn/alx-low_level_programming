#include "main.h"

/**
*print_last_digit - entry point of the problem
*@i: character variable
*Return: 0 Always
*/

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
	{
		k = -k;
		_putchar(k + '0');
	}
	return (k);
}
