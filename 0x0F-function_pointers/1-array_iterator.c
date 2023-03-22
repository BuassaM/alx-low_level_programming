#include "function_pointers.h"
/**
 * array_iterator - executes a function on each array element
 * @array: array of elements to execute 
 * @action: pointer to the function to be executed
 * @size: elements numb to print
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
unsigned int i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
