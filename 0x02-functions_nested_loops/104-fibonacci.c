#include <stdio.h>

/**
 * main - entry point of the function
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, n;
	unsigned long current, last, tmp;

	current = 2;
	last = 1;
	n = 98;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("1");
		else if (i == 1)
			printf(", 2");
		else
		{
			tmp = current;
			current += last;
			last = tmp;
			printf(", %lu", current);
		}
	}
	printf("\n");
	return (0);
}
