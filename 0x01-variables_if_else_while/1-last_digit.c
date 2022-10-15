#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Description: function declaration
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("%i and is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%i and is 0\n", n % 10);
	}
	else
	{
		printf("%i and is less than 6 and not 0\n", n & 10);
	}


	return (0);

}
