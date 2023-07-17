#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees dogs.
* @d: dog to be freed.
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;
{
/*Free the allocated memory for name and owner strings*/
free(d->owner);
free(d->name);
/*Free the memory allocated for the dog structure itself*/
free(d);
}
}
