#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i < 11)
	{
		int c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}
