#include <stdio.h>
/**
 * main - The fizz buzz thingy!
 * return: (0) Success 
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 1)
		{
			printf("%d", n);
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
