#include "main.h"
/**
 * _isdigit - Checks for digits
 * @c: the character to be checked
 * Return: 1 ( True )  or 0 (False)
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 58)
{
return (1);
}
else
{
return (0);
}
}
