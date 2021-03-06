#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Free all the dogs malloced by previous programs
 * @d: Pointer to my_dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
