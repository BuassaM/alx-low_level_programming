#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory
* @b:  bytes amount
* Return: pointer to allocated memory
* If malloc fails, status  equal  98
*/

void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);
if (p != NULL)
return (p);
exit(98);
}
