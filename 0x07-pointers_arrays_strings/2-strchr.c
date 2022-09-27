#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string 
 * @c: character to find
 * Return: first occurence
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *r;

	r = "\0";
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			j = 0;
			do {
				*(r + j) = *(s + i + j);
				j++;
			} while (*(s + i + j) != '\0');
			*(r + j) = '\0';
		}
	}

	return (r);
}
