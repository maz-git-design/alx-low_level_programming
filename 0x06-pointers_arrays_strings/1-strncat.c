#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string where to append another string
 * @src: string to append
 * @n: number of bytes to cut
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int  dest_len;

	i = 0;
	dest_len = 0;
	do {
		dest_len++;
		i++;
	} while (*(dest + i) != '\0'); 

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
