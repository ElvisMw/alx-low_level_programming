#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory for dog structure
 * @d: Points dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
