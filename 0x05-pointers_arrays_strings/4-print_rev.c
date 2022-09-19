#include "main.h"
/**
 *print_rev - print a string in reverse
 *@s: pointer to the string to be printed
 *Return: void
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
