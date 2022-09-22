#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string to capitalize
 * Return: string capitalized
 */
char *cap_string(char *s)
{
	int i;
	char c;

	i = 0;

	do {
		c = *(s + i);
		if (c == ' ' || c == '\t' || c == '\n'
				|| c == ',' || c == ';' || c == '.'
				|| c == '!' || c == '?' || c == '"'
				|| c == '(' || c == ')' || c == '{'
				|| c == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			{
				*(s + i + 1) -= 32;
				i++;
			}
		}
		i++;
	} while (c != '\0');

	return (s);
}
