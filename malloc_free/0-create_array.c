#include <stdlib.h>

/**
 * create_array - cre©e un tableau de caract√®res et l'initialise avec un char
 * @size: taille du tableau
 * @c: caract√®re e base
 *
 * Return: pointeur vers tableau, ou NULL si e©chec ou taille = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
