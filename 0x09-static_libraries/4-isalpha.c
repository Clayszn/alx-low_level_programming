#include "main.h"

/**
  *_isalpha - entry point for the code
  *@c: character to be checked
  *
  *Return: Always 0.
  */

int _isalpha(int c)
{
	if (c >= 65 || c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
