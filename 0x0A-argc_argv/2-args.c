#include <stdio.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: status
 */
int main(int __attribute__((unused)) argc,
		__attribute__((unused)) char *argv[])
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
