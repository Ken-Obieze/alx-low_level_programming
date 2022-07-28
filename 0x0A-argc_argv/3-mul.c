#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all argumnt in console
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
