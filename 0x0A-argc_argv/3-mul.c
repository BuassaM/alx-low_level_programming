#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two ns
* @argc: nums of command line args.
* @argv: array that contains the program command line args.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
