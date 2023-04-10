#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @p: funct to bit value
 * @index: numb to start indices.
 *
 * Return: -1 if error
 * 1 if sucess 
 */
int clear_bit(unsigned long int *p, unsigned int index)

if (index >= (sizeof(p) * 8))
return (-1);
*p &= ~(1 << index);

return (1);
}

