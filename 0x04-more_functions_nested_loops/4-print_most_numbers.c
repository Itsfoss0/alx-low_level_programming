#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
for (int i = 48; i <= 58; i++)
{
if (!(i == 50) || !(i == 52))
{
putchar(i);
}
}
putchar('\n');
}
