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


/**
*print_most_numbers - prints
*Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}

/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */

void more_numbers(void)
{

int i, j;
        for (i = 1; i <= 10; i++)
        {
                for (j = 0; j <= 14; j++)
                {
                        if (j >= 10)
                        _putchar('1');
                        _putchar(j % 10 + '0');
                }
                        _putchar('\n');
                }
}



