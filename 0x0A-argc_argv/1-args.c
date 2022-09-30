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
	printf("%d\n", (argc - 1));

	return (0);
}
