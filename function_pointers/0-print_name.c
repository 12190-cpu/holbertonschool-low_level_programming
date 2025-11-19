#include "function_pointers.h"

/**
 * print_name - affiche un nom
 * @name: pointe vers le nom
 * @f: pointe vers fonction
 *
 * Description: Cette fonction appelle la fonction pointée par 
 * pour afficher le nom. Si f ou name est NULL, elle ne fait rien.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
