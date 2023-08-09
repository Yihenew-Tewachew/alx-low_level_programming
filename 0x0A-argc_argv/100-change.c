#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array vector
 * Return: 0 for success 1 for error
 */
int main(int argc, char *argv[])
{
	int numberOfCoins;
	int i;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numberOfCoins = atoi(argv[1]);
	result = 0;
	if (numberOfCoins < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && numberOfCoins >= 0; i++)
	{
		while (numberOfCoins >= coins[i])
		{
			result++;
			numberOfCoins -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

