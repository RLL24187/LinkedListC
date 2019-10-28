#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(){
  // struct node  n0, n1, n2, n3, n4, n5, n6, n7, n8;
  // struct node* p0, p1, p2, p3, p4, p5, p6, p7, p8;

  struct node *p0 = NULL;

  printf("Begin testing for linkedlist: \n");
  printf("Printing empty list: \n");
  print_list(p0);

  printf("Adding numbers -256 through 256: \n");
  int i;
  for (i = -256; i < 257; i++){
     p0 = insert_front(p0, i);
  }
  print_list(p0)


  return 0;
}
