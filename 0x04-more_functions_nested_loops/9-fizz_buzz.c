# include <stdio.h>

/**
 * main - prints 1 to 100 with all multiples of 3 and 5 replaced
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && C % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (c % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (c == 1)
			printf("1");	
		else
		{
			printf(" %i", c);
		}
	}
	printf("\n");

	return (0);

}
