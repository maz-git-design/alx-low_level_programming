#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: pointer to the string to print in reverse
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	do {
		c = *(s + i);
		if (c == '\0')
		{
			for (j = i - 1; j >= 0; j--)
			{
				c = *(s + j);
				_putchar(c);
			}
			break;
		}
		i++;
	} while (c != '\0');
	_putchar('\n');
}
