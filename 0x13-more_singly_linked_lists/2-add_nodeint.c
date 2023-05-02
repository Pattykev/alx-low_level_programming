#include "lists.h"

/**
*add_nodeint - add a struct pointer at the beginning of the linked list
*@head: the head of the linked list
*@n: the value to add
*Return: listint_t
*/



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*link first node in head with the new_node*/
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	/*add new node at the beginning of the list*/
	*head = new_node;

	return (*head);
}
