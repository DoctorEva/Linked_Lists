#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

Data_node* DN_back( Data_node* list )
{
  Data_node* foo = DN_next( list );
  // Do we have a later node? If so, go there. Else we're at the end.
  return foo ? DN_back( foo ) : list;
}



Data_node* DN_front( Data_node* list )
{
  Data_node* foo = DN_prev( list );
  // Do we have a predecesor node?
  return foo ? DN_front( foo ) : list;
}
