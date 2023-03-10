#include <stdio.h>
/**
* main - prints the number of args that pass into it.
* @argc: n of command line args.
* @argv: array  contains the program command line args
* Return: 0 - Goods.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
