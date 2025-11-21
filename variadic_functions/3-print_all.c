#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - affiche un caractere
 * @ap: arguments
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - affiche un entier
 * @ap: arguments
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_f - affiche une decimale
 * @ap: arguments
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - affiche une chaine de caactere (ou NULL)
 * @ap: arguments
 */
void print_s(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - affiche tout
 * @format: types d'arguments passes dans la fonction
 *
 * Description: c = char, i = int, f = float, s = string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";

	typedef struct print
	{
		char t;
		void (*f)(va_list);
	} print_t;

	print_t types[] = {
		{'c', print_c}, {'i', print_i},
		{'f', print_f}, {'s', print_s},
		{0, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j].t)
		{
			if (types[j].t == format[i])
			{
				printf("%s", sep);
				types[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
