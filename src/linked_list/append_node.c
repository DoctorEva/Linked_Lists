#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

/*! append_node() adds a new node to the end of an existing list,
      or begins a new list with the one node.
    RETURNS: the address of the newly added node.
    PARAMS: Address of an object or value,
            unique ID indicating the type of the value,
            Address of any node in the list or NULL to start a new list.
*/
Data_node* append_node(void* value_ptr, int typeID, Data_node* list)
{
  Data_node* end = list_back(list);
  Data_node* new_node = (Data_node*) malloc(sizeof(Data_node));

  new_node->next = NULL;
  new_node->value_ptr = value_ptr;
  new_node->typeID = typeID;
  new_node->previous = end;

  if(end)
  {
    end->next = new_node;
  }
  return new_node;
}
