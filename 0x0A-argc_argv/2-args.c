#include <stdio.h>
/**
 * main - Print all arguments recieved
 * @argc: arguments' count
 * @argv: Pointer to a string of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

		return (0);
}
