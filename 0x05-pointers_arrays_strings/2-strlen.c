#include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer to a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter, i;
	char c;

	i = 0;
	counter = 0;
	do {
		c = *(s + i);
		if (c != '\0')
			counter++;
		i++;
	} while (c != '\0');

	return (counter);
}
