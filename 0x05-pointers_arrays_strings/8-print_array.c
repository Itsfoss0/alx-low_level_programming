#include "main.h"
#include <stdio.h>
/**
 *print_array - print array elements
 *@a: pointer to the array
 *@n: number of elements to print
 *return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
