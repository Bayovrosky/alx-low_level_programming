#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t struct
 * @d: pointer to the dog_t struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory allocated for name and owner strings */
		free(d->name);
		free(d->owner);

		/* Free the memory allocated for the dog_t struct */
		free(d);
	}
}
