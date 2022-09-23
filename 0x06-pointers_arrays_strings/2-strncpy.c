#include "main.h"

/**
 * _strncpy - coptie a string
 * @dest: where to copy a stirng
 * @src: the string to copy
 * @n: number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char c;

	i = 0;
	do {
		c = *(src + i);
		*(dest + i) = c;
		if (c == '\0')
		{
			for (j = i + 1; j < n; j++)
				*(dest + j) = '\0';
			break;
		}
		i++;
	} while (i < n);

	return (dest);
}
