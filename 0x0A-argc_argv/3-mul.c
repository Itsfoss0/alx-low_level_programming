#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiply two numbers
 *@argc: argument count
 *@argv: pointer to a string of args
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	prod = a * b;

	printf("%d\n", prod);
	return (0);
}
