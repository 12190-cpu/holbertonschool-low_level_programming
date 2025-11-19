#include "function_pointers.h"

/**
 * print_name - affiche un nom
 * @name: poitne vers le nom
 * @f: pointe vers fonction
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

	f(name);
}
