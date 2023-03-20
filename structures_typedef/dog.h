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

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
