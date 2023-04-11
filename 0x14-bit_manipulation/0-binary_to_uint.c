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
int v;
unsigned int d = 0;

if(!t)
return (0);

while (t && *t)

if (t[v] < '0' || t[v] > '1')
return (0)

d= d * 2 + *t - '0';
d++;
}
return (d);
}
