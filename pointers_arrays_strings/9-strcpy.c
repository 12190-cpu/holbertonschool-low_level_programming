#include "main.h"
#include <string.h>

/**
 * _strcpy - copie la chaîne pointée par src vers de
 * @dest: pointeur vers le buffer de destination
 * @src: pointeur vers la chaîne sourc
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
