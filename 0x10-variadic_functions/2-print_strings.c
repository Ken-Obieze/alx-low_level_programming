#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @separator: string to be printed between numers
 * @n: number of characters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg (list, char *);
		if (!str)
			str = "(nil)";
		if (!seperator)
			printf("%s", str);
		else if (seperator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", seperator, str);
	}
	va_end (list);
	printf('\n');
}
