#include <stdio>
#include "dog.h"
/**
 * new_dog - create a new dog.
 * @name: new dog name.
 * @age: new dog age.
 * @owner: owner name.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog == NULL)
		return;

	new_dog->name = strup(name);
	new_dog->owner = strup(owner);

	return new_dog;
