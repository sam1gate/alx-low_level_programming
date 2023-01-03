#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 *
 * @a: is a pointer to an int.
 * @size: is a pointer to an int.
 *
 * Return: Returns the transformed pointer
 *
**/

void print_diagsums(int *a, int size)
{
int i, j, sum = 0;

	for (i = 0; i < size; i++)
		sum += a[(size * i) + i];

printf("%d, ", sum);
sum = 0;

	for (j = 0; j < size; j++)
		sum += a[(size * (j + 1)) - (j + 1)];

printf("%d\n", sum);
}
