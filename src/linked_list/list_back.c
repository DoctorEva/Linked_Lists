#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

/*! list_back() finds the backmost node of the list.
    RETURNS: the address of the last node in the list.
    PARAMS: Address of any node in the list.
*/
Data_node* list_back(Data_node* existing_node)
{
  if(!existing_node)
    return NULL;

  Data_node* current = existing_node;
  while(current->next != NULL)
  {
    current = current->next;
  }
  return current;
}
