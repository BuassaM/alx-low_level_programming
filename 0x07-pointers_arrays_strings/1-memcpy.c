#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content to copy
 *@src: Source of data to copy
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	} /*END WHILE*/


	return (dest);
}
