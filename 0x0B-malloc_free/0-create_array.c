#include "main.h"
#include <stdlib.h>
/**
 *create_array -  create memory of size size
 *                initializes it with a specific char
 *@size: size of amount of memory to allocate in bytes
 *@c: char to initialize with the array
 *Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array./
 */
char *create_array(unsigned int size, char c)
{
char *arrays;
unsigned int pos;

if (size == 0)
{
return (NULL);
}
arrays = malloc(sizeof(char) * size);

if (arrays == NULL)
{
return (NULL);
}
for (pos = 0; pos < size; pos++)
{
arrays[pos] = c;
}
return (arrays);
}
