#include "main.h"

/**
 * _realloc - reallocates a memory block using amalloc and free
 * @ptr: peviously allocated memory block
 * @old_size: old size to change
 * @new_size: new size of memory block to allocate
 * Return: pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *opr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	opr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p1[i] = opr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = opr[i];
	}
	free(ptr);
	return (p1);
}
