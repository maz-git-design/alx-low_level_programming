#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int n1, n2, i;
	
	n1 = 0;
	n2 = 0;
	i = 0;
	do {
		n1 = *(s1 + i);
		i++;
	} while (*(s1 + i) != '\0');
	i = 0;
	do {
		n2 += *(s2 + i);
		i++;
	} while (*(s2 + i) != '\0');

	return (n1 - n2);
}
