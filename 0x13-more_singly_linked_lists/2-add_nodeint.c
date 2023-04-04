#include "lists.h"
/**
 * add_nodeint - add new node from head list.
 * @head: head listint_t 
 * @n: node int
 *
 * Return: new n, if failure display NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_n;

new_n = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_n->n = n;
new_n->next = *head;
*head = new_n;

return (new_n);
}
