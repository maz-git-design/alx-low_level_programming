#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum;
	int r1, r2;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		r1 = i % 3;
		r2 = i % 5;
		if (r1 == 0 || r2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
