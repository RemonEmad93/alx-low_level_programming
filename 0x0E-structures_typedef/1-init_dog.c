#include "main.h"

#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Pointer to a char array that represents the name of the dog.
 * @age: The age of the dog.
 * @owner: Pointer to a char array that represents the owner of the dog.
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
