#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: A number
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = (n % 10) * -1;
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
