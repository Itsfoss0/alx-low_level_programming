#include<stdio.h>
/**
*main - Main Entry point where programme execution starts
*Return: Always 0 (Success)
*/
int main(void)
{
int inttype;
char chartype;
long longtype;
float floattype;
double doubletype;

printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
printf("Size of an int: %zu byte(s) \n", sizeof(inttype));
printf("Size of a long int: %zu byte(s)\n", sizeof(longtype));
printf("Size of a long long int: %zu byte(s) \n", sizeof(doubletype));
printf("Size of a float: %zu byte(s) \n ", sizeof(floattype));
return (0);
}
