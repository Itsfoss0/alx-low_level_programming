#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the unsinged int number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted_num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		converted_num = 2 * converted_num + (b[i] - '0');
	}
	return (converted_num);
}
