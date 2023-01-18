#include "main.h"
/**
 * _islower -  checks for lowercase characters
 * @c: the character to be checked
 *
 * Return: 1 if character is lowecase or 0 for otherwise.
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
