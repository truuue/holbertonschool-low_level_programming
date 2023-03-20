#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - struct dog
 * @d: ptnr struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->named ? d->name : "(nil)", d->age, d->owner ? d->owner : "(nil)");
}
