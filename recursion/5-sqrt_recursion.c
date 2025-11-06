#include "main.h"

/**
 * _sqrt_helper - Fonction auxiliaire qui teste les candidats.
 * @n: Nombre dont on veut la racine carrée.
 * @guess: Valeur actuelle à tester.
 *
 * Description: Vérifie si guess^2 == n.  
 * Si guess^2 > n, retourne -1 (pas de racine naturelle).  
 * Sinon, teste récursivement guess + 1.
 *
 * Return: Racine carrée naturelle si elle existe, sinon -1.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Renvoie la racine carrée naturelle d'un nombre.
 * @n: Nombre dont on veut la racine carrée.
 *
 * Description: Utilise _sqrt_helper pour trouver la racine carrée.
 * Retourne -1 si n < 0 ou si n n'a pas de racine naturelle.
 *
 * Return: Racine carrée naturelle de n, ou -1 si elle n'existe pas.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_helper(n, 0));
}

