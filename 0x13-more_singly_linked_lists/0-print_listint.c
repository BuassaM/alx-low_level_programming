#include "lists.h"

/**
* print_listint - print list elements.
* @m: head pointer for listint_t
*
* Return: nos of nodes.
*/
size_t print_listint(const listint_t *m)
{
size_t nodesnos = 0;

while (m != NULL)
{
printf("%d\n", m->n);

nodesnos++;
m = m->next;
}

return (nodesnos);
}



