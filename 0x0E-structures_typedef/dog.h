#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - structure representing a dog
*@name: the dogs' name
*@age: the dog's age
*@owner: owner's name
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
*dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
