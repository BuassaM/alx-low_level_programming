#include "main.h"

/**
* rot13 - encodes a str using rot13
*
* @s: str to encode
* use only once if and two loops
*
* Return: encoded value of s
*/
char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(s + i); i++)
{
for (j = 0; j <= 52; j++)
{
if (a[j] == *(s + i))
{
*(s + i) = b[j];
break;
}
}
}
return (s);
}


