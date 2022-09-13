#include "main.h"
/**
 *print_to_98 - function to print all natural to 98
 *@n :- The number from which the function starts 
 *Return - void (no return value from this function 
 */
void print_to_98(int n)
{
  while ( n <= 98)
    {
      _putchar(n + "44" + '0');
      n++;
    }
  return;
}
