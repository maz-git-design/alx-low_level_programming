#include "main.h"

/** puts_half - print half of a string, followed by a new line
 * @str: string pointer
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i, j, counter, start;
	char c;

	i = 0;
	counter = 0;
	do {
		c = *(str + i);
		if (c != '\0')
			counter++;
		else
		{
			if (counter % 2 == 0)
				start = counter / 2;
			else 
				start = (counter / 2) + 1;
			for (j = start; j <= counter - 1; j++)
			       _putchar(*(str + j));
		}
		i++;
	} while (c != '\0');
	_putchar('\n');
}
