#include "main.h"

/**
 * _memcpy - cpoie n octets d'1 source vers une destination
 * @dest: zone ou envoyer la copie
 * @src: zone source de la copie
 * @n: nombre d'octets a copier
 *
 * Return: La destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
