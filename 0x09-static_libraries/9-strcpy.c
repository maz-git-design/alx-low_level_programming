#include "main.h"

/**
 * _strcpy - copy the string pointed to by src, to the dest
 *
 * @dest: where to copy
 * @src: the pointer of string to copy
 * Return: the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char c;

	i = 0;
	do {
		c = *(src + i);
		*(dest + i) = c;
		i++;
	} while (c != '\0');

	return (dest);
}
