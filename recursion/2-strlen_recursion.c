#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la cha�ne a mesurer.
 *
 * Description: Retourne le nombre de caractères avant le caractère nul '\0'.
 * Utilise la récursion pour parcourir la chaîne sans boucle.
 *
 * Return: La longueur de la chaîne.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));
}
