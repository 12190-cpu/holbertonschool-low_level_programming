#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers
 *@i: the int to run
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)
	_putchar(i + '0');
	}
	_putchar('\n');
}
