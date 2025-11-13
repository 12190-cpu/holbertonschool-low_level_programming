#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libere la memoire
 * @d: pointeur vers le chien
 *
 * Description: Libe¨rettes les infos
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
