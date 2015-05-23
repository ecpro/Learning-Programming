#include<stdio.h>

typedef struct node_type{
    int data;
    node_type* next;
}NODE;

typedef NODE* LIST;

int main()
{
  int i;
  printf("\n 1. insert at the beginning");
  printf("\n 2.insert at the end");
  printf("\n 3.delete any element");
  printf("\n Enter your choice:\n");
    
  switch(i)
  {
    case 1: insert_at_beg();
            break;
    case 2: insert_at_end();
            break;
    case 3: delete_element();
            break;
    case 4: create_list();
            break;
    default: printf("\n goodbye");
  }
  return 0;
}

void create_list()
{
    LIST header;
    header=(list)malloc(sizeof(NODE));


}



