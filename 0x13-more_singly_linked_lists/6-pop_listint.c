#include "lists.h"

/**
 * pop_listint - listint_t delete node.
 * @head: listint_t pointer
 *
 * Return: deleted data otherwise 0
 */
int pop_listint(listint_t **head)
{
listint_t *tmpstor;
int m;
if (*head == NULL)
return (0);

m = (*head)->n;
tempstor = (*head)->next;
free(*head);
*head = tempstor;

return (m);
}
