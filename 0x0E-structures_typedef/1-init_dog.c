#include "dog.h"

/**

 * init_dog - values to struct dog
 * @d: struct dog
 * @name: name for dog.name
 * @age: age for dog.age
 * @owner: name of  dog.owner
 *
 * Description: adds values to the struct dog with the
 * corresponding details inputed
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
