#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

//struct node { int i; struct node *next; };

// Create the following functions:
void print_list(struct node * n){
  printf("Printing node at address %p\n [ ", n);
  struct node *current = n;
  while (current){
    printf("%d ", n->i);
    current = n->next;
  }
  printf("]\n");
}
// Should take a pointer to a node struct and print out all of the data in the list

struct node * insert_front(struct node * n, int i);
// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.

struct node * free_list(struct node *n);
// Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).

struct node * remove_node(struct node *front, int data);
// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
// Your list functions should be in a .c/.h library, with a separate .c file used for testing.