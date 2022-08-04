#include "3-main.c"

/**
 * main - properfoms math operations
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(arg[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && arg2 == c)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", resullt);
	return (0);
}
