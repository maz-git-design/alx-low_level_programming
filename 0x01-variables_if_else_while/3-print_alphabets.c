#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char upperc = 'A';

	while (c <= 'z')
		putchar(c++);
	while (upperc <= 'Z')
		putchar(upperc++);
	putchar('\n');
	return (0);
}
