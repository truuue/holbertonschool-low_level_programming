#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - int variable of struct dog
 * @d: struct dog
 * @name: char string
 * @age: int
 * @owner: char string
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
