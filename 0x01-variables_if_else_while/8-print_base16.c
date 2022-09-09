#include <stdio.h>

/**
 * My entry point
 *
 */
int main(void)
{
	char n = '0';
	char c = 'a';

	while(n <= '9')
		putchar(n++);
	while(c < 'g')
		putchar(c++);
	putchar('\n');
	return (0);
}
