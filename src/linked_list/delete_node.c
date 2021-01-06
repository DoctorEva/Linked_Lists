#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

/*! delete_node() frees up a node and removes it from the linked list.
    RETURNS: the address of an adjacent node, or NULL if the list is now empty.
    PARAMS: Address of the node to delete.
    NOTE: Value should be freed first, if allocated on the heap, to prevent memory leaks.
*/
Data_node* delete_node(Data_node* target)
{
  if(!target)
  {
    puts("delete_node: Target is null.");
    return NULL;
  }

  Data_node* prev_node = target->previous;
  Data_node* next_node = target->next;
  free(target);

  if(next_node)
    next_node->previous = prev_node;

  if(prev_node)
   prev_node->next = next_node;

  return (prev_node) ? prev_node : next_node;
}
