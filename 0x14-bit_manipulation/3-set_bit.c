#include "main.h"

/**
 * set_bit - Set value of 1 at a specif given index
 * @p: A pointer to the bit.
 * @index: index number to indices start
 *
 * Return: -1 if error
 *  1 if sucess
 */
int set_bit(unsigned long int *p, unsigned int index)
{
if (index >= (sizeof(p) * 8))
return (-1);

*p  = *p | 1 << index;

return (1);
}

