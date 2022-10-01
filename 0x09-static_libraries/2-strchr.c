#include <stdio.h>
#include "main.h"


/**
 * _strchr - locate a character in a string
 * @s: string 
 * @c: character to find
 * Return: first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s  != '\0')
		s++;

	if (*s == c)
		return s;
	else
		return NULL;
}
