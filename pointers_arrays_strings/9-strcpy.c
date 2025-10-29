#include "main.h"

/**
 * _strcpy - copie la chaîne point� par src vers dest
 * @dest: pointeur vers le buffer de destination
 * @src: pointeur vers la chaîne source
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	dest[i] = '\0';

	return (dest);
}
