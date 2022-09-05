#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between numers
 * @n: number of characters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
			printf("%d", va_arg (list, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(list,int));
		else
			printf("%s%d", seperator, va_arg(list, int));
	}
	va_end (list);
	printf('\n');
}