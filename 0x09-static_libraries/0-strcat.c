#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: a string where to append another string
 * @src: a string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char c;

	i = 0;
	do {
		c = *(dest + i);
		if (c == '\0')
		{
			j = 0;
			do {
				*(dest + i + j) = *(src + j);
				j++;
			} while (*(src + j) != '\0');
		}
		i++;
	} while (c != '\0');

	return (dest);

}
