#include "main.h"

/**
 * _isalpha - Checks for Alphabetic Characters
 *
 * @c: Alphabetic character
 *
 * Return: 1 (True - alphabetic chars) OR 0 (False - not alphabetic char)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
