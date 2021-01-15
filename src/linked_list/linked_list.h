#ifndef LIST_H
#define LIST_H
#include <stddef.h>

typedef struct _Data_node
{
  struct _Data_node* next;
  struct _Data_node* previous;
} Data_node;

// DN_simple.c
void* DN_getData( Data_node* node );
Data_node* DN_next( Data_node* node );
Data_node* DN_prev( Data_node* node );

Data_node* DN_alloc( Data_node* list, void* data, size_t size );
Data_node* DN_free ( Data_node* node );
void       DN_freeAll( Data_node* node );

// DN_ends.c
Data_node* DN_back ( Data_node* list );
Data_node* DN_front( Data_node* list );

int DN_size( Data_node* list );

#endif
