#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
