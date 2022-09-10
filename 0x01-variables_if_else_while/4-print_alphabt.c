#include <stdio.h>
/**
* main - main block
* Description: print lowercase letters of the alphabet that are not 'q' and 'e'
* Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
