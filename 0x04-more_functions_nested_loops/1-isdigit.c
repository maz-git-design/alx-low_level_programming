#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: character to check for
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
