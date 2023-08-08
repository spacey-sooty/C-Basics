#include "sll.h"

void printMenu() {
  printf("Options:\n");
  printf("\t1. Add a node to the list.\n");
  printf("\t2. Remove a node from the list.\n");
  printf("\t3. Insert data to a node.\n");
  printf("\t4. Print the list.\n");
  printf("\t5. Quit.\n");
}


void printList() {
  Node *current = head;
  while (current != NULL) {
    printf("%d->\n", current->data);
    current = current->next;
  }
}

Node *addNode(int data) {
  Node *new = NULL;
  // two cases

  // empty list
  if (head == NULL) {
    new = malloc(sizeof(Node));
    if (new == NULL) {
      return NULL;
    }
    new->data = data;
    head = new;
    new->next = NULL;
  }/* non empty list */ else {
    new malloc(sizeof(Node));
    if (new == NULL) {
      return NULL;
    }
    new->data = data;
    new->next = head;
    head = new;
  }
  return new;
}

