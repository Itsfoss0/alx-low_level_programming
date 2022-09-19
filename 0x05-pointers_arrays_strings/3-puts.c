#include "main.h"
/**
 *_puts - print the characters to stdout
 *@str : pointer to the string to be printed
 *return : void
 */
void _puts(char *str)
{
for (int pos = 0; str[pos] != '\0'; pos++)
{
_putchar(str[pos]);
}
_putchar("\n");
}
