#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute une fonction sur elements du tableau
 * @array: tableau
 * @size: taille du tableau
 * @action: pointeur vers la fonction
 *
 * Description: Parcourt chaque élément du tableau et appelle
 * la fonction pointée par action sur chacun d’eux.
 * Si array ou action est NULL, la fonction ne fait rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
