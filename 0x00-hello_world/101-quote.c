#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mess1[] = "and that piece of art is useful\"";
	char mess2[] = " - Dora Korpar, 2015-10-19\n";

	strcat(mess1,mess2);
	fwrite(mess1, strlen(mess1), 1, stderr);
	return (1);
}
