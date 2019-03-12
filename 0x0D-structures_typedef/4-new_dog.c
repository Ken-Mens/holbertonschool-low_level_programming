#include "dog.h"
/**
 * _strcpy - copies string pointed to by source to
 * the buffer
 * @dest: destination
 * @src: string to copy
 * Return: pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int copycat;

	for (copycat = 0; (*(src + copycat)); copycat++)
	{
		dest[copycat] = src[copycat];
	}
	return (dest);
}
/**
 * _strlen - returns lenght of a string
 * @s: character(s)
 * Return: integer.
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		x++;
	}
	return (x);
}
/**
 * new_dog - function that frees dogs.
 * @name: character pointer name.
 * @age: float ages.
 * @owner: character pointer owners.
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpname = malloc(sizeof(char) * (_strlen(name) + 1));
	if (cpname == NULL)
		return (NULL);
	_strcpy(cpname, name);

	cpowner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (cpowner == NULL)
		return (NULL);
	_strcpy(cpowner, owner);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
