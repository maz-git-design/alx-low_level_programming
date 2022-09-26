#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the memory data
 * @b: constant by
 * @n: number of bytes of the memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
