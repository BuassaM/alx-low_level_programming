#include "main.h"

/*
 * function that converts binary
 * to unsigned int
 *@t: binary 0 to 1 pointer
 *
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *t)
{
unsigned int decimal = 0;
if (t == NULL)
return (0);

while (t && *t)
{

if (*t < '0' || *t > '1')
return (0);

d = decimal * 2 + *t - '0';
t++;

}

return (d);
}
