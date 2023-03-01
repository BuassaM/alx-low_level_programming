#include "main.h"

/**
* _strncpy - copies string
*
* @n: length of number of characters to copy
* @dest: destination str
* @src: source str
*
* Return: copied str
*/
char *_strncpy(char *dest, char *src, int n)
{
int index;

/* find length, compare strings */
for (index = 0; index < n && *(src + index); index++)
{
*(dest + index) = *(src + index);
}

/* normal length of destination string, ending in null char */
for (; index < n; index++)
{
*(dest + index) = '\0';
}
return (dest); /* copied str */
}
