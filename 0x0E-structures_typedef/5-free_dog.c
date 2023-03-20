#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs.
 * @d: struct dog.
 *
 * Return: no  return.
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
