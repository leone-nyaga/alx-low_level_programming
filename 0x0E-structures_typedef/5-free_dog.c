#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: the struct dog to be freed
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
