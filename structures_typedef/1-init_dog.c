#include "dog.h"
#include <stdio.h>
/**
 * init_dog - unction that initialize a variable of type.
 * @d: struct variable.
 * @name: dog name.
 * @age: dog age.
 * @owner: owner name.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
