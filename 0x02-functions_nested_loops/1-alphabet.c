#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Description: function declaration
 *
 */

void print_alphabet(void)

{
	char x = 'a';

	while (x <= 'z')

	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
