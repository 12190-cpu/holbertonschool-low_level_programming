#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - affiche une chaine de caracteres suivie d'une nouvelle ligne
 * @separator: chaine a afficher entre les strings
 * @n: nombre de chaines passees dans la fonction
 *
 * Description: affiche un nombre n de chaines, si NULL affiche (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char*str;

	v_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
}
va_end(ap);
printf("\n");
}
