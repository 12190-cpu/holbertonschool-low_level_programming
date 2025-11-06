#include "main.h"

/**
 * _pow_recursion - Calcule la puissance d'un nombre.
 * @x: Nombre de base.
 * @y: Exposant
 *
 * Description: Retourne x puissance y.
 * Si y est ne©gatf, retourne -1 pour indiquer une erreur
 * Utilise la re©cursvite pour calculer le rÃ©sulta
 *
 * Return: x^y si y >= 0, sinon -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
