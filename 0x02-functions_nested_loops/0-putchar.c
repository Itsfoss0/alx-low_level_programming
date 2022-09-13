#include "main.h"
/**
 * main - Entry point
 * Description - Print putchar with a newline character at the end
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putchar";
int i = 0;

while (str[i] != '\0')
{
char c  = str[i];
_putchar(c);
}
return (0);
}
