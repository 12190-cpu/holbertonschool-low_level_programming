#include "main.h"

/**
 * _strncpy - Copie une chaîne de carctères avec une limite donnée.
 * @dest: Pointeur vers la chaîe de destination.
 * @src: Pointeur vers la chaîne source.
 * @n: Nombre maximum de caractèresa copier.
 *
 * Return: Un pointeur vers la chaîne dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
