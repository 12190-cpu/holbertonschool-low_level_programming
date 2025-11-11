#ifndef MAIN_H
#define MAIN_H

/**
 * main-Entry point
 *
 * Return: Always 0 (Success)
 *
 */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
