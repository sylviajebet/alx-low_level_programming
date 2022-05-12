#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - Function to initialize a variable of type struct dog
  *
  * @d: Pointer to structure
  * @name: First element, name
  * @age: Second element, age
  * @owner: Third element, owner
  * Return: Void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
