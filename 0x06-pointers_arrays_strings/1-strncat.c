#include "main.h"

/**
* _strncat - concatenate two strings
*
* @n: number of characters in source stng
* @dest: destination stng
* @src: source 
*
* Return: new concat string
*/
char *_strncat(char *dest, char *src, int n)
{
int index_1, index_2;

/* find length of destination stng */
for (index_1 = 0; dest[index_1] != '\0'; index_1++)
{
continue;
}

/* find length of source stng and check if less than length of integer n */
for (index_2 = 0; src[index_2] != '\0' && index_2 < n; index_2++)
{
dest[index_1 + index_2] = src[index_2]; /* concat strings */
}

dest[index_1 + index_2] = '\0'; /* add null character to concat strings */
return (dest);
}
