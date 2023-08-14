#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a dog structure with provided values.
 * @d: Pointer to the dog structure to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: No return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /*If d initiated correctly, validate */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
