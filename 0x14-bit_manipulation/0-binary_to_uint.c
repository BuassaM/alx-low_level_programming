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
unsigned int d = 0;

int bin;
int btwo;

if (t==NULL)
return (0);


for (bin = 0; t[bin] != '\0'; bin++)
;

for (bin--, btwo = 1; bin >= 0; bin--, btwo *= 2)
{
if (t[bin] != '0' && t[bin] != '1')
{
return (0);
}

if (t[bin] & 1)
{
d += btwo;
}
}

return (d);
}
