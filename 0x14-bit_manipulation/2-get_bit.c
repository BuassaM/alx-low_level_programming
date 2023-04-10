#include "main.h"

/**
*get_bit: function returns bits
*value at a given index.
* @p: Bit.
* Return: Null if -1 error or Given index bits value
*/
int get_bit(unsigned long int p, unsigned int index)
{

unsigned int value = p >> index;

if (index >= (sizeof(p) * 8))
return (-1);

if ((p & (1 << index)) == 0)
return (0);


return (value & 1);
}
