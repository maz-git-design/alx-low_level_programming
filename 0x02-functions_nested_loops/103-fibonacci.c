#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, r;
	long sum, current, last, tmp;

	for (i = 0; i < 100; i++)
	{
		if (i == 0)
			current = 1;
		else if (i == 1)
		{
			tmp = current;
			current = 2;
			last = tmp;
			sum = 2;
		}
		else
		{
			if (current <= 4000000)
			{
				tmp = current;
				current += last;
				last = tmp;
				r = current % 2;
				if (r == 0)
					sum += current;
			}
			else
				break;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
