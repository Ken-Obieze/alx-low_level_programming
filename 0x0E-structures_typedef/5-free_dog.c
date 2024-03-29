#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fress memory allocated to structure dog
 * @d: structure to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
