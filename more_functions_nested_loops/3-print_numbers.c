#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * print_numbers - prints the numbers
 *@i: the int to run
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	_putchar(i + '0');
	_putchar('\n');
}
