#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: strin to convert
 * Return: number converted
 */
int _atoi(char *s)
{
	int i, j, isnegatif;
	int c;
	int number;

	i = 0;
	isnegatif = 1;
	number = 0;
	do {
		c = *(s + i);
		if (c >= 48 && c <= 57)
		{
			j = i;
			do {
				number = number * 10 + (*(s + j) - 48);
				j++;
			} while (*(s + j) >= 48 && *(s + j) <= 57);
			break;
		}
		else if (c == 45)
			isnegatif *= -1;
		i++;
	} while (c != '\0');

	return  (number * isnegatif);
}
