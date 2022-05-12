#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - Function that creates a new dog
  *
  * @name: First element, name
  * @age: Second element, age
  * @owner: Third element, owner
  * Return: Void, otherwise NULL
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int idx, name_len, own_len;

	struct dog *anew_dog = NULL;

	name_len = 0;
	own_len = 0;
	while (name[name_len])
		name_len++;
	while (owner[own_len])
		own_len++;

	anew_dog = malloc(sizeof(struct dog));
	if (anew_dog == NULL)
	{
		free(anew_dog);
		return (NULL);
	}
	anew_dog->name = malloc(name_len + 1);
	if (anew_dog->name == NULL)
	{
		free(anew_dog->name);
		free(anew_dog);
		return (NULL);
	}
	anew_dog->owner = malloc(own_len + 1);
	if (anew_dog->owner == NULL)
	{
		free(anew_dog->name);
		free(anew_dog->owner);
		free(anew_dog);
		return (NULL);
	}
	for (idx = 0; idx <= name_len; idx++)
		anew_dog->name[idx] = name[idx];
	for (idx = 0; idx <= own_len; idx++)
		anew_dog->owner[idx] = owner[idx];
	anew_dog->age = age;
	return (anew_dog);
}
