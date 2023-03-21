#include "main.h"

#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog.
 * @name: Pointer to a char array that represents the name of the dog.
 * @age: The age of the dog.
 * @owner: Pointer to a char array that represents the owner of the dog.
 *
 * Return: Pointer to the new struct dog if successful, otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Allocate memory for the new struct dog */
    dog_t *new_d = malloc(sizeof(dog_t));
    if (new_d == NULL) {
        return NULL;
    }

    /* Allocate memory for the name and owner fields */
    new_d->name = malloc(sizeof(char) * (strlen(name) + 1));
    if (new_d->name == NULL) {
        free(new_d);
        return NULL;
    }
    new_d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
    if (new_d->owner == NULL) {
        free(new_d->name);
        free(new_d);
        return NULL;
    }

    /* Copy the name and owner strings to the new struct dog */
    strcpy(new_d->name, name);
    strcpy(new_d->owner, owner);
    new_d->age = age;

    return new_d;
}
