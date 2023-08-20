#include "_putchar.h"

/**
*print_numbers - print numbers
*
*Return: 0 Always
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
