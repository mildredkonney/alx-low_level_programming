#include "main h"

/**
 * _isdigit - checks if c is a digit
 * @var: int to be checked
 * Return: 1 if var is a digit, 0 otherwise
 */

int _isdigit(int var)
{
	if (isdigit(var))
		return (1);
	return (0);
}
