#include "main.h"
/**
 *_print_rev_recursion - Print a string in reverse recursively
 *@s:Pointer to the strint to be printed
 *Return - void (Always)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
