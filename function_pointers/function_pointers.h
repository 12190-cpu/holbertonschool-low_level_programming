#ifndef MAIN_H
#define MAIN_H

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
