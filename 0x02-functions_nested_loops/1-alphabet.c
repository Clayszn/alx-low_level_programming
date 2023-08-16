#include "main.h"

/**
 * print_alphabet - print a -z
 *
 * Return: 0 Always
 */

void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
