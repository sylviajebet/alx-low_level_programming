#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Function that frees dogs
  * @d: Pointer to dog struct
  *
  * Return: Void
  */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
