#include "main.h"
#include <stdlib.h>

/**
 * _strdup - cre©e une copie d'une chai®ne de carace¨res en mÃ©moire dynamique
 * @str: chai®e a copier
 *
 * Return: pointeur vers la nouvelle chai®ne, ou NULL si Ã©chec ou str = NU
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
