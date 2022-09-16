#include "main.h"

/**
 * print_number - print any integer number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	int count, n1, i, j, k, digit, power;

	count = 0, n1 = n;
	if (n >= 0 && n < 10)
		_putchar(n + '0');
	else if (n < 0 && n * (-1) < 10)
	{
		_putchar('-'), _putchar(n + '0');
	}
	else
	{
		do {
			n1 /= 10, count++;
		} while (n1 != 0);
		if (n < 0)
		{
			n = n * (-1), _putchar('-');
		}
		for (i = count - 1; i > 0; i--)
		{
			power = 1;
			for (j = 0; j < i; j++)
				power *= 10;
			digit = n / power, _putchar(digit + '0');
			n -= digit * power;
			if (n < 10)
			{
				if (i > 1)
				{
					for (k = 0; k < i - 1; k++)
						_putchar('0');
					_putchar(n + '0');
					break;
				}
				else
					_putchar(n + '0');
			}
		}
	}
}
