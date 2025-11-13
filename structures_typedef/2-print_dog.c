#include <stdio.h>
#include "dog.h"

/**
 * print_dog - affiche les infos de la struct
 * @d: pointeur vers la structure
 *
 * Description: Si un champ est NULL, la fonction affiche (nil)
 * a la place. Si d est NULL, elle ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
