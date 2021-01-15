#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Data_node* DN_alloc( Data_node* list, void* data, size_t size )
{
  if( !data )
  {
    fprintf( stderr, "DN_alloc second parm requires address of data to copy to node.\n" );
    return list;
  }
  if( !size )
  {
    fprintf( stderr, "DN_alloc third parm requires size to alloc for data.\n" );
    return list;
  }

  Data_node* end = DN_back( list );
  Data_node* new_node = (Data_node*) malloc( sizeof(Data_node) + size );

  new_node->next = NULL;
  new_node->previous = end;
  memcpy( DN_getData( new_node ), data, size );

  if(end)
    end->next = new_node;

  return new_node;
}
