#include <stdlib.h>

/**
 * _calloc - alloue de la me©moire pour un tableau et initialisea 0
 * @nmemb: nombre d'elements du tableau
 * @size: taille en octets de chaque element
 *
 * Return: pointeur vers la me©moire alloe√©e, ou NULL sie©che
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
