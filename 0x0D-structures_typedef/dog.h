#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
* struct dog - structure made for dog
* @name: character pointer name of dog.
* @age: float age number
* @owner: character pointer owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
