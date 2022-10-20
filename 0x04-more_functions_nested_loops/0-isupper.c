#include "main.h"

/**
 * _isupper -  checks for uppercase character.
 * @c: variable to be checked
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
