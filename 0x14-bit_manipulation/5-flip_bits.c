#include "main.h"

/**
 * flip_bits - Counts the number of bits need
 *  flip to get from one numb to another.
 * @p: The numb
 * @l: flip to unsign bit n
 *
 * Return: the numb count flipbitcounter
 */
unsigned int flip_bits(unsigned long int p, unsigned long int l)
{
unsigned long int fpbcount = 0, flip_bit = p ^ l;
while (flip_bit)
{
if ((flip_bit & 1) != 0)
fpbcount++;
flip_bit >>= 1;
}

return (fpbcount);
}
