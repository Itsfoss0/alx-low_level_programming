#include "main.h"
#include <stdlib.h>
/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 *str_concat - concatenate two strings
 *@s1: First string
 *@s2: Second string
 *Return: Pointer to memory location holding the new string
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2, i;
char *m;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";

size1 = _strlen(s1);
size2 = _strlen(s2);
m = malloc((size1 + size2) *sizeof(char) + 1);
if (m == 0)
	return (0);

for (i = 0; i <= size1 + size2; i++)
{
	if (i < size1)
		m[i] = s1[i];
	else
		m[i] = s2[i - size1];
}
m[i] = '\0';
return (m);
}
