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
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}

	}
	printf("%d\n", sum);
	return (0);

}
