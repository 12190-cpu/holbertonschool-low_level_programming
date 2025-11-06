#include "main.h"

/**
 * _is_prime_helper - Fonction auxiliaire pour tester les diviseurs.
 * @n: Nombre a tester.
 * @div: Diviseur courant.
 *
 * Description: Vérifie si n est divisible pr div ou par un diviseur plus grand.
 * Retourne 0 si divisible, 1 si pas de diviseur trouvé.
 *
 * Return: 1 si n est premier, 0 sinon.
 */
int _is_prime_helper(int n, int div)
{
	if (div * div > n)
	return (1);

	if (n % div == 0)
	return (0);

	return (_is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Nombre a tester.
 *
 * Description: Retourne 1 si n est premier, 0 sinon.
 * Utilise _is_prime_helper pour tester les diviseurs a partir de 2.
 *
 * Return: 1 si n est premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n < 2)
	return (0);

	return (_is_prime_helper(n, 2));
}
