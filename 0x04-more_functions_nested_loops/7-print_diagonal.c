#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 */

void print_diagonal(int n)
{
	int line, spaces;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (line == n - 1)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
