#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
if (n < 1)
{
putchar(10);
}
else
{
for (int k = 0; k <= n; k++)
{
putchar(95);
}
}
}
