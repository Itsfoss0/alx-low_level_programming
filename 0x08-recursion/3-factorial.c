#include "main.h"
/**
 *factorial - return the factorial of a number
 *@n:number to find its factorial
 *return: fact(The resul)
 */
int factorial(n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	next = factorial(n - 1);
	return (n * next);
}
