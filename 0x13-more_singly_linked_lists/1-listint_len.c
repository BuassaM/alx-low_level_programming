#include "lists.h"

/**
 * listint_len - nos of elements in listint_t
 * listint_t singly linked list
 * @m: print list
 * Return: nos of elements
 */
size_t listint_len(const listint_t *m)
{
size_t noselem = 0;

while (m!= NULL)
{
noselem++;
m = m->next;
}
return (noselem);
}
