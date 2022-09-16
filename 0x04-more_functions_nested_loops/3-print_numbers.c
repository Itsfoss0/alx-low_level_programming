#include "main.h"
#include <stdio.h>
/**
 *print_numbers - print numbers from 0-9
 *return: 0 (sucess) or 1(failure)
 */

void print_numbers(void)
{
for (int c = 48; c <= 58; c++)
{
putchar(c);
}
putchar('\n');
}
