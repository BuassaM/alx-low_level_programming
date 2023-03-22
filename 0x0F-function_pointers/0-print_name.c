#include "function_pointers.h"

/**
 * print name - prints name
 * @name: name to be printed
 * @f: points to a printing function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
