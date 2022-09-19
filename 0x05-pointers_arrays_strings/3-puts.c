#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer to string to be printed
 * Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
