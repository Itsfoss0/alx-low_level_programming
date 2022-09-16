#include "main.h"
/**
 * _isupper - Checks for uppercase character
 *@c: The character to be checked
 * Return: 1 (True - uppercase) OR 0 (False - lowecase)
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
