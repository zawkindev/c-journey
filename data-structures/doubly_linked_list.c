#include "stdlib.h"

typedef struct Node {
  int data;
  struct Node *next;
  struct Node *prev;
} Node;

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  newNode->next = NULL;

  return newNode;
}

void insertAtTheBeginning(Node **head, int data) {
  Node *newNode = createNode(data);
  newNode->next = *head;
  (*head)->prev = newNode;
  *head = newNode;
}
