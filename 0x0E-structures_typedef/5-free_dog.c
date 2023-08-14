#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  this frees memory chosen for  struct dog
 * @d: struct dog that has to be freed
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
