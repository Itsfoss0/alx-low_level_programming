#include "main.h"
/**
 *_strcpy -Copy a string from src to dest
 *@dest: Pointer to the destination address
 *@src: Ponter to the source address
 *Return: char copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
