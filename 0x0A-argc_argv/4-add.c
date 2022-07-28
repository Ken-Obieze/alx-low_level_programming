#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints sum of numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argv][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");

				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
