#include "main.h"
/**
 *_strlen_recursion - recursively find the lenght of a string
 *@s : pointer to the string parameter
 *Return: len (length of the string)
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (!(*s == '\0'))
{
len++;
len +=  _strlen_recursion(s + 1);
}
return (len);
}
