#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string where to append another string
 * @src: string to append
 * @n: number of bytes to cut
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char c;

	i = 0;
	do {
		c = *(dest + i);
		if (c == '\0')
		{
			for (j = 0; j < n; j++)
			{
				if (*(src + j) != '\0')
					*(dest + i + j) = *(src + j);
				else
				{
					*(dest + i + j) = '\0';
					break;
				}
			}
		}
		i++;
	} while (c != '\0');

	return (dest);
}
