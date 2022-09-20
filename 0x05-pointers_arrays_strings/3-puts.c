#include "main.h"

/**
 * _puts - print a stirng
 * @str: string to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	do {
		c = *(str + i);
		if (c != '\0')
			_putchar(c);
		i++;
	} while (c != '\0');
	_putchar('\n');
}
