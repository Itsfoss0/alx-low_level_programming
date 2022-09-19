#include <stdio.h>
/**
 *swap_int - swap two integers
 *@a: Pointer to the integer to be swaped with a
 *@b: Pointer to the interget to be swaped with b
 *Return: void
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
