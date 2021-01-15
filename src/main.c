#include <stdio.h>
#include "linked_list/linked_list.h"

const char* names[] =
{
  "Roxanne",
  "Eva",
  "Neil",
  "Roberts",
  "Anya"
};

Data_node* alloc_test()
{
  Data_node* list = NULL;
  for( int i = 0; i < 5; i++ )
  {
    list = DN_alloc( list, (void*) names[i], sizeof( char* ) );
  }
  return list;
}

void forwards_iteration( Data_node* list )
{
  Data_node* curr = DN_front( list );
  while( curr )
  {
    printf( "  %s\n", (char*) DN_getData( curr ) );
    curr = DN_next( curr );
  }
}

void backwards_iteration( Data_node* list )
{
  Data_node* curr = DN_back( list );
  while( curr )
  {
    printf( "  %s\n", (char*) DN_getData( curr ) );
    curr = DN_prev( curr );
  }
}

int main( int argc, char** argv )
{
  puts( "This program tests the included linked_list library" );
  puts( "Lets try making a list out of only strings first" );
  Data_node* list = alloc_test();

  printf( "Size of created list: %d\n", DN_size( list ) );

  puts( "Lets print the list out forwards..." );
  forwards_iteration( list );

  puts( "Now backwards..." );
  backwards_iteration( list );

  puts( "All done, lets free the whole list." );
  DN_freeAll( list );
  list = NULL;

}
