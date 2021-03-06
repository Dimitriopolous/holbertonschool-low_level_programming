#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end of a list
 * @*head: Pointer to first node
 * @n: Value in node being added to list
 * Return: Address of newNode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *last = (*head);

	if (head == NULL)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	
	if ((*head) == NULL)
	{
		newNode->prev = NULL;
		(*head) = newNode;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	newNode->prev = last;
	return (newNode);
}
