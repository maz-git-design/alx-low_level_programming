#include <stdio.h>

/**
 * My entry point
 *
 */
int main(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		if(c == 'q' || c == 'e')
			c++;
		else
			putchar(c++);
	}
	putchar('\n');
	return (0);
}
