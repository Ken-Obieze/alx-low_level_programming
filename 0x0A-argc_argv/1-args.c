#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints all argument it recieves
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
