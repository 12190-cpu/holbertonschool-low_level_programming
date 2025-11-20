#include "3-calc.h"

/**
 * op_add - aditionne 2 entiers
 * @a: 1er entier a aditionner
 * @b: 2eme entier a aditionner
 *
 * Return: resultat de l'adition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustrait 2 entiers
 * @a: 1er entier a soustraire
 * @b: 2eme entier
 *
 * Return: resultat de la soustraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 ** op_mul - multiplie 2 entiers
 * @a: 1er entier a multiplier
 * @b: 2eme entier a multiplier
 *
 * Return: resultat de la multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 ** op_div - divise 2 entiers
 * @a: 1er entier a diviser
 * @b: 2eme entier a diviser
 *
 * Return: resultat de la division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 ** op_mod - calcule l'entier qu'il reste apres une division
 * @a: 1er entier a diviser
 * @b: 2eme entier
 *
 * Return: reste de la division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
