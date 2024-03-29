#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(){
  // struct node  n0, n1, n2, n3, n4, n5, n6, n7, n8;
  // struct node* p0, p1, p2, p3, p4, p5, p6, p7, p8;
  struct node *p0 = NULL;

  printf("\nBegin testing for linkedlist: \n");
  printf("\nPrinting empty list (NULL): \n");
  print_list(p0);

  // printf("\nAdding numbers -256 through 256 (testing insert_front and print_list): \n");
  // int i;
  // for (i = -256; i <= 256; i++){
  //    p0 = insert_front(p0, i);
  // }
  // print_list(p0);
  // above works, I jsut wanted to test on larger numbers, but output is very long, so I made fewer numbers

  printf("\nAdding numbers 0 through 9 (testing insert_front and print_list): \n");
  int i;
  for (i = 0; i < 10; i++){
     p0 = insert_front(p0, i);
  }
  print_list(p0);

  printf("\nTesting remove_node: \n");
  printf("Removing 5 (middle of list): \n");
  p0=remove_node(p0, 5);
  print_list(p0);
  printf("Address should not be different.\n\n");

  printf("Removing 4 (middle of list): \n");
  p0=remove_node(p0, 4);
  print_list(p0);
  printf("Address should not be different.\n\n");

  printf("Removing 11 (not in list)\n");
  p0=remove_node(p0, 11);
  print_list(p0);
  printf("Address should not be different, neither should the list.\n\n");

  printf("Removing 0 (end of list): \n");
  p0=remove_node(p0, 0);
  print_list(p0);
  printf("Address should not be different.\n\n");

  printf("Removing 1 (end of list): \n");
  p0=remove_node(p0, 1);
  print_list(p0);
  printf("Address should not be different.\n\n");

  printf("Removing 9 (beginning of list)\n");
  p0=remove_node(p0, 9);
  print_list(p0);
  printf("Address should be different.\n\n");

  printf("Removing 8 (beginning of list)\n");
  p0=remove_node(p0, 8);
  print_list(p0);
  printf("Address should be different.\n\n");

  printf("\nTesting free_list: \n");

  p0 = free_list(p0);

  printf("\nPrinting the freed p0 (should be NULL)\n");
  print_list(p0);

  printf("\nRemoving 0 from empty list: \n");
  remove_node(p0, 0);
  print_list(p0);
  printf("Address should not be different.\n");

  return 0;
}
