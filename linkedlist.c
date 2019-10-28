#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

//struct node { int i; struct node *next; };

// Create the following functions:
void print_list(struct node * n){
  printf("Printing node at address %p\n[ ", n);
  struct node *current = n;
  while (current){
    printf("%d ", current->i);
    current = current->next;
  }
  printf("]\n");
}
// Should take a pointer to a node struct and print out all of the data in the list

struct node * insert_front(struct node * n, int x){
  // Make sure that there's enough memory to insert_front with malloc
  struct node *current = malloc(sizeof(struct node));
  current->next = n;
  current->i = x;
  return current;
}
// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.

struct node * free_list(struct node *n){
  struct node *current = n;
  while(n){
    current = n->next;
    free(n);
    n = current;
  }
  // print_list(n);
  return n; //should be NULL
}
// Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).

struct node * remove_node(struct node *front, int data){
  if (front != NULL){
    struct node *current = front;
    if (front->i == data){ //if first node has data
      free(front);
      current = current->next;
      front = current;
    }
    else{
      struct node *nextNode = current->next;
      while (nextNode){
        if (nextNode->i == data){
          // if the data of the next node is equal to data
          // free the next node and set the current's next to that next node's next
          current->next = nextNode->next;
          free(nextNode);
        }
        current = current->next;
        nextNode = nextNode->next;
      }
    }
  }
  return front;
}
// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
// Your list functions should be in a .c/.h library, with a separate .c file used for testing.
