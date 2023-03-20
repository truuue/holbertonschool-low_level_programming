#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: char string
 * @age: int
 * @owner: char string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} 
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
