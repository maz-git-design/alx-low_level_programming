#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: pointer to the string to change
 * Return: the pointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	do {
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 32;
		}
	       i++;
	} while (*(s + i) != '\0');

	return (s);
}
