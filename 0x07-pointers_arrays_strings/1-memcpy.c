#include "main.h"

/**
 * _memcpy - Copies content from source to destination
 * memory area
 * @src: pointer to source memory area
 * @dest: Pointer to destination memory destination
 * @n: Number of bytes
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
