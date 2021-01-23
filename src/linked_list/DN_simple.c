#include "linked_list.h"
#include "stdio.h"

void* DN_getData( Data_node* node )
{
  if( !node )
  {
    fprintf( stderr, "DN_getData must be provided a node.\n" );
    return NULL;
  }
  void* start = (void*) node;
  return ( start + sizeof( Data_node ) );
}
Data_node* DN_next( Data_node* node )
{
  return node ? node->next : NULL;
}

Data_node* DN_prev( Data_node* node )
{
  return node ? node->previous : NULL;
}
