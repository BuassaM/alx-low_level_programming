#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 If big endian.
 * 1 If little endian.
 */
int get_endianness(void)
{
int numb = 1;
char *endianne;

endianne = (char *)&numb;

if (*endianne == 0)
return (0);

else

return (1);
}
