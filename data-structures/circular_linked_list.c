#include "stdlib.h"

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = newNode;

  return newNode;
}

void insertAtTheBeginning(Node **head, int data) {
  Node *newNode = createNode(data);

  Node *temp = *head;

  while (temp->next != *head) {
    temp = temp->next;
  }

  temp->next = newNode;
  newNode->next = *head;
  *head = newNode;
}
