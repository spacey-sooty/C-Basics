#include "../include/sll.h"

int main(int argc, char **argv) {
  int option = -1;
  while (option != 5) {
    printMenu();
    int num_received = scanf("%d", &option);
    int data;
    if (num_received == 1 && option > 0 && option <=5) {
      switch (option) {
        case 1:
          printf("What data should I insert?:\n");
          scanf("%d", &data);
          Node *new = addNode(data);
          // add operation
          break;
        case 2:
          // remove operation
          break;
        case 3:
          // insert operation
          break;
        case 4:
          printList();
          // print the list
          break;
        case 5:
          break;
      }
    }
  }
  return 0;
}

