#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int DN_size( Data_node* list )
{
  if ( !list ) return 0;

  int count = 0;
  list = DN_front( list );
  while( list )
  {
    count++;
    list = DN_next( list );
  }
  return count;
}
