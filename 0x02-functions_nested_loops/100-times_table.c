#include "main.h"

/**
 * print_times_table - print the n times table, starting with 0
 * @n: n times integer
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, product, first, second, third;

	if (n <= 15 && n >= 0)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					}
					else if (product >= 10 && product < 100)
					{
						first = product / 10, second = product % 10;
						_putchar(' ');
						_putchar(first + '0');
						_putchar(second + '0');
					}
					else if (product >= 100)
					{
						first = product / 100, second = (product / 10) % 10;
						third = product % 10;
						_putchar(first + '0');
						_putchar(second + '0');
						_putchar(third + '0');
					}
				}
				else
					_putchar(product + '0');
			}
			_putchar('\n');
		}

}
