#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - retourne la somme de tous ses parametres
 * @n: nombre d'arguments
 *
 * Return: somme des paramètres, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int somme = 0;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	somme += va_arg(args, int);

	va_end(args);

	return (somme);
}
