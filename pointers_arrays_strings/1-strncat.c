#include "main.h"

/**
 * _strncat - Concatène deux chaînes de caractères.
 * @dest: Pointeur vers la chaîne de destination.
 * @src: Pointeur vers la chaîne source.
 * @n: Nombre maximum de caractères à copier depuis src.
 *
 * Return: Un pointeur vers la chaîne dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
