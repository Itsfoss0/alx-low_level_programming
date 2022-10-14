#include "function_pointers.h"
/**
*print_name - Print the name
*@name: The array of characters to print
*@f: pointer to a function which prints the name
*/

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;

f(name);

}
