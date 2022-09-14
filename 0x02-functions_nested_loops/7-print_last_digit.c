#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the integer representing the number
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit > 0)
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		lastdigit = lastdigit * (-1);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}

}
