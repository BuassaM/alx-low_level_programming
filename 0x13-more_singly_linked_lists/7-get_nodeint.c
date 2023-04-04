#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: listint_t pointer
 * @index: listint_t index return
 *
 * Return: index pointer required, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

unsigned int listintdoi_snth;

listint_t *tempstor = head;

for (listintdoi_snth = 0; listintdoi_snth < index; listintdoi_snth++)
{
if (head == NULL)
return (NULL)

tempstor = tempstor->next;
listintdoi_snth++;
}

return (tempstor ? tempstor : NULL);
}
