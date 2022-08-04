#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - printd name
 * @name: name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
