#include "main.h"
int _multiplier(int x, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: is a pointer to an int.
 *
 * Return: Returns the result.
 *
**/

int _sqrt_recursion(int n)
{

if (n == 1)
	return (1);
else if (n == 0)
	return (0);
else if (n < 0)
	return (-1);

return (_multiplier(2, n));

}

/**
 * _multiplier - Returns an iterative multiplication.
 *

