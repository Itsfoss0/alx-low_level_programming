#include "main.h"
/**
 *_puts - print the characters to stdout
 *@str : pointer to the string to be printed
 *return : void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
}
putchar("\n");
}
