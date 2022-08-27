#include "main.h"

/**
 * main - copies content of filr to another
 * @argc: number of arguments
 * @argv: argument array
 * Return: always zero success
 */

int main(int argc, char *argv[])
{
	int fdr, fdw, r, a, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fdr, buf, BUFSIZ)) > 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdr);
		exit(99);
	}
	a = close(fdr);
	c = close(fdw);
	if (a < 0 || c < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
		
