#include "lists.h"
/**
 * add_nodeint_end - add new node to end of  listint_t
 * @head:  pointer to listint_t 
 * @n: listint_t int
 *
 * Return: new elem addr, if fail NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_n, *end_n;

new_n = malloc(sizeof(listint_t));
if (new_n == NULL)
return (NULL);

new_n->n = n;
new_n->next = NULL;

if (*head == NULL)
*head = new_n;
else
{
end_n = *head;

while (end_n->next != NULL)
end_n = end_n->next;
end_n->next = new_n;
}
return (*head);
}
