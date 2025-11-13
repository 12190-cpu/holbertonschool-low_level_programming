#include "dog.h"

/**
 * init_dog - initialise une structure de type struct dog
 * @d: pointeur vers structure
 * @name: nom
 * @age: age
 * @owner: proprie©tair
 *
 * Description: Assigne les valeurs aux champs pointes par d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
