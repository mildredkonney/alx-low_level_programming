/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 */

void print_alphabet_x10(void)

{
	int count = 0;
	char ch = 'a';

	while (count++ <= 9)

	{
		while (ch <= 'z')

		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
