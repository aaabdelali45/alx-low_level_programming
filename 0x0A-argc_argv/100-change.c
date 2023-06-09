#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array name
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int n, i, result;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= c[i])
		{
			result++;
			n = n - c[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
