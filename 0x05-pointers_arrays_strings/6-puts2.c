#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	char c;

	i = 0;
	do {
		c = *(str + i);
		if (i == 0 || i % 2 == 0)
			_putchar(c);
		i++;
	} while (c != '\0');
	_putchar('\n');
}
