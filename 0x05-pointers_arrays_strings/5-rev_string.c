#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char c;
	char *t;

	i = 0;
	t = "a";
	do {
		c = *(s + i);
		*(t + i) = c;
		if (c == '\0')
		{
			for (j = i - 1; j >= 0; j--)
			{
				*(s + i - (j + 1)) = *(t + j);
			}
			break;
		}
		i++;
	} while (c != '\0');
}

