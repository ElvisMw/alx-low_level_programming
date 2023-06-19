#include "dog.h"

/**
 * init_dog - Initialization of struct dog
 * @d: Points struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
