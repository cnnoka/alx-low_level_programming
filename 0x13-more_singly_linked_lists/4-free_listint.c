#include "lists.h"


/**
* free_list_int - frees a linked list
* @head: listint_t list to be freed
*/
void free_list_int(listint_t *head)
{
listint_t *temp;


while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
