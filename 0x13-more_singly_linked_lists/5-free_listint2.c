#include "lists.h"

/**
 * free_listinttwo - frees a listint
 * @head: free_listint 
 *
 * Return: no return.
 */
void free_listinttwo(listint_t **head)
{
listint_t *tempstor;
listint_t *intfree;

if (head != NULL)
{
intfree = *head;
while ((tempstor = intfree) != NULL)
{
intfree = intfree->next;
free(tempstor);
}
*head = NULL;
}
}
