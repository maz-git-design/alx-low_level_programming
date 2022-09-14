#include "main.h"

/**
 * times_table - prints 9 times table,
 * starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j;
	int product;
	int firstd, secondd;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (product < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				firstd = product / 10;
				secondd = product % 10;
				_putchar(firstd + '0');
				_putchar(secondd + '0');
			}

		}
		_putchar('\n');
	}
}
