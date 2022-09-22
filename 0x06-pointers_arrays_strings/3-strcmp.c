#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int n1;
	int n2;

	n1 = *s1;
	n2 = *s2;

	return (n1 - n2);
}
