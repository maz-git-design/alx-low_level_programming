#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer of array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= 0; i--)
	{

		tmp = *(a + n - 1 - i);
		*(a + n - 1 - i) = *(a + i);
		*(a + i) = tmp;

		if (*(a + n - 1 - i) == *(a + 1))
			break;
	}
}
