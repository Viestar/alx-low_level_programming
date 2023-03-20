#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - dog struct initialiser.
 * @d: Struct to be initialized.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
