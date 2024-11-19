#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}


void push(int data, Node** top){
  Node *newNode = createNode(data);
  newNode->next = *top;
  *top = newNode;
}
