#include <stdio.h>
/**
 * main - Entry point
 * Return -Always 0 for sucess 1 for failure
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
