#include <stdio.h>

/**
 * My main entry point
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{

			putchar(',');
			putchar(' ');
		}
		n++;
	}	
	putchar('\n');
	return (0);
}
