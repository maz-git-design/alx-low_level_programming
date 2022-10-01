#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: occurnece 
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
			{
				return (s);
			}
		}
		s++;
	}

	return NULL;
}
