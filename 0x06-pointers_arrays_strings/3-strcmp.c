#include "main.h"

/**
* _strcmp - compare two strings
*
* @s1: destination str
* @s2: source str
*
* Return: integer alternative of copied string
*/
int _strcmp(char *s1, char *s2)
{
/* find length of both str */
while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
{
s1++;
s2++;
}
if (*s1 == *s2) /* check to see if both str are equal */
{
return (0);
}
else
{
return (*s1 - *s2); /* if not same, return dissimilarity */
}
}
