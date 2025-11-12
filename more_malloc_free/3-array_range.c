#include <stdlib.h>

/**
 * array_range - cre©e un tableau d'entiers allant de mi a max inclus
 * @min: valeur mini du tableau
 * @max: valeur maxi du tableau
 *
 * Return: pointeur vers le nouveau tableau, ou NULL si e©chec
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
