#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case,
 * followed by a new line
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
