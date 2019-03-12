#include "dog.h"
/**
* _strdup - duplicates string.
* @str: string to be interpreted.
* Return: pointer.
*/

char *_strdup(char *str)
{
	char *point;
	int j, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	i++;
	point = malloc(sizeof(char) * i);

		for (j = 0; j < i; j++)
		{
			point[j] = str[j];
		}
	return (point);
}

/**
* new_dog - We're making a new dog.
* @name: character pointer name.
* @age: float ages.
* @owner: character pointer owners.
* Return: new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
		if (puppy == NULL)
		{
			return (NULL);
		}
	puppy->name = _strdup(name);
		if (!puppy->name)
		{
			free(puppy);
			return (NULL);
		}
	puppy->owner = _strdup(owner);
		if (!puppy->owner)
		{
			free(puppy->name);
			free(puppy);
			return (NULL);
		}
	puppy->age = age;

	return (puppy);
}
