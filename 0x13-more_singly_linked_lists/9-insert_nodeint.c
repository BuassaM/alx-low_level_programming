#include "lists.h"
/**
 * insert_nodeint_at_index - listint_t add any position new node
 * @head: listint pointer node
 * @idx: index for new node
 * @n: node position to insert
 *
 * Return: new node insert point, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nwnod, *temp_node = *head;
unsigned int node;

nwnod = malloc(sizeof(listint_t));
if (nwnod == NULL)
return (NULL);

nwnod->n = n;

if (idx == 0)
{
nwnod->next = temp_node;
*head = nwnod;

return (new_node);
}
for (node = 0; node < (idx - 1); node++)
{
if (temp_node == NULL || temp_node->next == NULL)
return (NULL);
temp_node = temp_node->next;
}
new_node->next = temp_node->next;
temp_node->next = new_node;

return (new_node);
}
