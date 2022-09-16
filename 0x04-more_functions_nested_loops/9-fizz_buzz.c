#include <stdio.h>

/**
 * main - entry point of my program
 * Return: Always 0.
 */
int main(void)
{
	int i, r, q;

	for (i = 1; i <= 100; i++)
	{
		r = i % 3;
		q = i % 5;
		if (r == 0 && i >= 3 && q != 0)
			printf("Fizz ");
		else if (q == 0 && i >= 5 && r != 0)
			printf("Buzz ");
		else if (r == 0 && q == 0 && i > 5)
			printf("FizzBuzz ");
		else
			printf("%d ", i);

	}
	printf("\n");
	return (0);
}
