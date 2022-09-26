#include "main.h"

/**
 * _strchr -Search for a character in a string
 *
 * @s: The string to be searched against
 *
 * @c: The character to find
 *
 * Return: Pointer to @s or NULL
 *
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
