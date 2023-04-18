#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialization of the struct
 * @d: a pointer that allows initialization
 * @name: represents name intialized
 * @age: age initilization
 * @owner: owner initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
