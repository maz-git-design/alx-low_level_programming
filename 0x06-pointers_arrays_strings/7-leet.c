#include "main.h"

/**
 * leet -encodes a string into 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;
	char c;

	i = 0;
	do {
		c = *(s + i);
		switch (c)
		{
			case 'a':
			case 'A':
				*(s + i) = '4';
				break;
			case 'e':
			case 'E':
				*(s + i) = '3';
				break;
			case 'o':
			case 'O':
				*(s + i) = '0';
				break;
			case 't':
			case 'T':
				*(s + i) = '7';
				break;
			case 'l':
			case 'L':
				*(s + i) = '1';
				break;
			default:
				*(s + i) = c;
		}
		i++;
	} while (c != '\0');
	return (s);
}
