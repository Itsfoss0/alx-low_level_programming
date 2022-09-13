#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
int num = 1024, result;
for (int i = 0; i < num; i++)
{
if (i % 15 == 0)
{
result += i;
}
}
return (0);
}
