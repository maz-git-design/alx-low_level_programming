#include <stdio.h>

/**
 * main - entry point of the program
 * Return: Always 0.
 */
int main(void)
{
	long  i, j;
	long  prime, n;

	n = 612852475143;
	while (n > 1)
	{
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				if (i % j == 0 && j != i)
				{
					prime = 0;
					break;
				}
				if (j == i)
					prime = i;
			}

			if (prime)
			{
				if (n % prime == 0)
				{
					n = n / prime;
					if (n == 1)
						printf("%ld\n", prime);
					break;
				}
			}
		}
	}
	return (0);
}
