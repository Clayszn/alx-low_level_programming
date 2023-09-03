#include "main.h"

/**
  *_isdigit - entry point for program
  *@c: variable to be intiated
  *
  *Return: Always 0
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);
	else
		return (0);
}
