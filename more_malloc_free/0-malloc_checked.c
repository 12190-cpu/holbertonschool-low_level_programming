#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloue de la memoire
 * @b: taille en octets de la me©moir a allouer
 *
 * Return: pointeur vers la me©moire alloee
 * si malloc e©choue, le programme se termine avec le statut 9
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
