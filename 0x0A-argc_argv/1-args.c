#include <stdio.h>
#include <stdio.h>

/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv: pointer to a string of args
*Return:0
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
