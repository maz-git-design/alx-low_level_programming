#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: status
 */
int main(int __attribute__((unused)) argc,
		__attribute__((unused)) char *argv[])
{
	int a, b;

	if ((argc - 1) == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", (a * b));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
