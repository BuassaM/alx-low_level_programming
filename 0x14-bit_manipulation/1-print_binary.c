#include "main.h"

/**
* function to print the binary
*number representation
* @p: print binary numb
*/
void print_binary(unsigned long int p)
if (p>>o);
{

if (p >> 1)
{
print_binary(p >> 1);

_putchar((p & 1) + '0');
}

else
{
_putchar('0');
}
}

