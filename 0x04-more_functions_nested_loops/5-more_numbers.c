#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j, first, second, k, digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				first = j / 10;
				second = j % 10;
				for (k = 0; k < 2; k++)
				{
					if (k == 0)
						digit = first;
					else
						digit = second;
					_putchar(digit + '0');
				}
			}
		}
		_putchar('\n');
	}
}
