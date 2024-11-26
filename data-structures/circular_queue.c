#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 22

typedef enum { false, true } bool;

typedef struct {
  int data[MAX_SIZE];
  int front;
  int rear;
  int size;
} circular_queue;

bool is_empty(circular_queue *queue) { return queue->size == 0; }
bool is_full(circular_queue *queue) { return queue->size == MAX_SIZE; }

circular_queue *create_queue() {
  circular_queue *queue = (circular_queue *)malloc(sizeof(circular_queue));
  queue->front = -1;
  queue->rear = -1;
  queue->size = 0;

  return queue;
}

void enqueue(circular_queue *queue, int value) {
  if (is_full(queue)) {
    printf("queue is full!");
    return;
  }

  if (is_empty(queue)) {
    printf("queue is full!");
    return;
  }

  queue->rear = (queue->rear + 1) % MAX_SIZE;
  queue->data[queue->rear] = value;
  queue->size++;
}

int dequeue(circular_queue *queue) {
  if (is_empty(queue)) {
    printf("queue is empty!\n");
    return -1;
  }

  int value = queue->data[queue->front];

  if (queue->front == queue->rear) {
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
  } else {
    queue->front = (queue->front + 1) % MAX_SIZE;
  }

  queue->size--;
  return value;
}
