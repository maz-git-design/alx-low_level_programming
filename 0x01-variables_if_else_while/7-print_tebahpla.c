#include <stdio.h>

/**
 * My entry point
 *
 */
int main(void)
{
	char c = 'z';

	while(c >= 'a')
		putchar(c--);
       	putchar('\n');
	return (0);
}
