#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - This function initializes a variable of type struct dog
 * @d: dog name initialized
 * @name: dog name
 * @age: age
 * @owner: owner of dog
 *
 * Return: 0 indicating success
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
