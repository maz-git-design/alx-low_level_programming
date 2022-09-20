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

	i = 0;
	do {
		c = *(s + i);
		if (c == '\0')
		{
			for (j = i - 1; j >= 0; j--)
			{
				c = *(s + i - (j + 1));
				*(s + i - (j + 1)) = *(s + j);
				*(s + j) = c;
				if (i - (j + 1) == j)
					break;
			}
			break;
		}
		i++;
	} while (c != '\0');
}

