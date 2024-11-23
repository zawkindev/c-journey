#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct {
  Node *front;
  Node *rear;
  int size;
} Queue;

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

Queue *createQueue() {
  Queue *queue = (Queue *)malloc(sizeof(Queue));
  queue->front = NULL;
  queue->rear = NULL;
  queue->size = 0;

  return queue;
}

void enqueue(Queue *queue, int data) {
  Node *newNode = createNode(data);
  if (queue->size == 0) {
    queue->rear = queue->front = newNode;
  } else {
    queue->rear->next = newNode;
    queue->rear = newNode;
  }
  queue->size++;
}
