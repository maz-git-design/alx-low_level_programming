#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: condition
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int counter;

	counter = 0;
	for (i = 0; *(accept + i) != '\0'; i++)
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i))
				counter++;
			if (*(s + j) == ' ' || *(s + j) == ',')
				break;
		}
	}

	return (counter);
}
