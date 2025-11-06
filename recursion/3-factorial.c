#include "main.h"

/**
 * factorial - le factoriel d'un nombre
 * @n: Nombre dont on veut le factoriel.
 *
 * Description:
 * Utilise la re�cursvite pour calculer le factoriel.
 * Si n est inférieu a 0, la fonction retourne -1 (erreur).
 * Le factoriel de 0 est défini comme 1.
 *
 * Return: Le factoriel de n, ou -1 si n < 0.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
