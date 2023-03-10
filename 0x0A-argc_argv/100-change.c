#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minim n of coins to make change for amount.
* of money.
* @argc: n of command line args.
* @argv: array that contains the program command line args.
* Return: 0 - Good.
*/
int main(int argc, char *argv[])
{
int cents, ncoins = 0;

if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
ncoins += 1;
}
printf("%d\n", ncoins);
return (0);
}
