#include "main.h"

/**
 * _strcat - concatène deux chaînes de caractère
 * @dest: chaîne de destinatio
 * @src: chaîne sourc a ajouter a la fin de dest
 *
 * Return: pointeur vers la chaîne résultantdest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
