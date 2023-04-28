#include "lists.h"

/**
*add_nodeint_end - add a struct point at the end of the linked list
*@head: the head of the linked list
*@n: the value to insert 
*Return: listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *end;
  listint_t *tmp;
  
  end =  malloc(sizeof(listint_t));
  if (end == NULL)
    return NULL;
  end->n = n;
  tmp = *header;
  while (*tmp->next != NULL )
    *tmp = *tmp->next;
  *tmp->next = end;
  
  return (end);
}
