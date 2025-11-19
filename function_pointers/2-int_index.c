#include "function_pointers.h"

/**
 * int_index - cherche un entier dans un tableau
 * @array: tableau d'entiers
 * @size: taille du tableau
 * @cmp: pointeur vers la fonction de comparaison
 *
 * Return: index du premier élément correspondant, ou -1 si aucun
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
