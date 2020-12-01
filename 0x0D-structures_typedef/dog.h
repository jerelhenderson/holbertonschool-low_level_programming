#ifndef DOG_H_
#define DOG_H_

/* standard libraries */
#include <stdlib.h>
#include <stdio.h>

/**
  * dog - structure type
  *
  * @name: name member
  * @age: age member
  * @owner: owner member
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
