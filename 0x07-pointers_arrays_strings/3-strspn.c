#include "main.h"

/**
* _strspn - entry point
* @s: string pointer
* @accept: string pointer
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, m, k = 0;

	if ((s[0] == '\0') || (accept[0] == '\0'))
	{
		return (0);
	}
	for (n = 0; s[n] != '\0'; n++)
	{
		if (k != n)
		{
			break;
		}
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				k++;
				break;
			}
		}
	}
	return (k);
}
