#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

Data_node* DN_free ( Data_node* node )
{
  if( !node )
  {
    fprintf( stderr, "DN_free cannot accept null input.\n" );
    return NULL;
  }

  Data_node* prev_node = DN_prev( node );
  Data_node* next_node = DN_next( node );
  free( node );

  if(next_node)
    next_node->previous = prev_node;

  if(prev_node)
   prev_node->next = next_node;

  return (prev_node) ? prev_node : next_node;
}

void DN_freeAll( Data_node* node )
{
  while( node )
    node = DN_free( node );
}
