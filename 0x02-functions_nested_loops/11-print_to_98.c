#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbrers from n to 98
 *
 * @n: the natural number from where start
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}


}
