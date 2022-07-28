#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints it's name
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
