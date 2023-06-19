#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - Prints dog struct's info
 * @d: Points dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age != NULL ? d->name : "(nil)");
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
