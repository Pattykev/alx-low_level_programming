#include "lists.h"

/**
*add_nodeint - add a struct pointer at the beginning of the linked list
*@head: the head of the linked list
*@n: the value to add
*Return: listint_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t begin= malloc(sizeof(listint_t));
  
  if (begin == NULL)
    return NULL;
  begin->n = n;
  begin->next = *head;
  *head = begin;
  
  return begin;
}
