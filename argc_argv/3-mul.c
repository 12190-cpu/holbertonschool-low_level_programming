#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres passÃ©s en arguments
 * @argc: nombre d'arguments
 * @argv: tableau contenant les arguments
 *
 * Return: 0 si succe¨s, 1 si erreu
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

