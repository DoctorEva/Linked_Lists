#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

/*! list_front() finds the frontmost node of the list.
    RETURNS: the address of the first node in the list.
    PARAMS: Address of any node in the list.
*/
Data_node* list_front(Data_node* existing_node)
{
  if(!existing_node)
    return NULL;

  Data_node* current = existing_node;
  while(current->previous != NULL)
  {
    current = current->previous;
  }
  return current;
}
