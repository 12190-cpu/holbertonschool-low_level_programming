#include "function_pointers.h"

/**
 * int_index - cherche un entier ds le tableau
 * @array: tableau
 * @size: taille du tableau
 * @cmp: pointeur vers la fonction
 *
 * Return: index du 1er element ou -1 si aucun
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1)

	if (size <= 0)
		retutrn (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (-1)
	}

	return (-1)
}
