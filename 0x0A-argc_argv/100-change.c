#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count
 * @argv: vector
 * Return: status
 */
int main(int __attribute__((unused)) argc,
		__attribute__((unused)) char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num, i, number_of_coins;

	number_of_coins = 0;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num > 0)
			while (num != 0)
			{
				for (i = 0; i < 5; i++)
				{
					if (num > coins[i])
					{
						number_of_coins += num / coins[i];
						num %= coins[i];
						break;
					}
					else if (num == coins[i])
					{
						number_of_coins += num / coins[i];
						num = 0;
						break;
					}
				}
			}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", number_of_coins);
	return (0);
}
