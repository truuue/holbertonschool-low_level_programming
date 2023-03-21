#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: char string
 * @age: int
 * @owner: char string
 * Return: pntr to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a_name, b_owner, i;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL)
		return (NULL);

	for (a_name = 0; name[a_name] != '\0'; a_name++)
	;
	for (b_owner = 0; owner[b_owner] != '\0'; b_owner++)
	;
	p_dog->name = malloc(sizeof(char) * a_name + 1);
	if (p_dog->name == NULL)
	{
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < a_name; i++)
		p_dog->name[i] = name[i];

	p_dog->name[i] = '\0';

	p_dog->age = age;

	p_dog->owner = malloc(sizeof(char) * b_owner + 1);
	if (p_dog->owner == NULL)
	{
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < b_owner; i++)
		p_dog->owner[i] = owner[i];

	p_dog->owner[i] = '\0';
	return (p_dog);
}
