#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *createNode(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void insertAtTheBeginning(struct Node** head, int data){
  struct Node* newNode = createNode(data);
  newNode->next = *head;
  *head = newNode; 
}
