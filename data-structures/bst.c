#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef struct node {
  int data;
  struct node *left;
  struct node *right;
} node;

node *create_node(int data) {
  node *new_node = (node *)malloc(sizeof(node));
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;

  return new_node;
}

void insert(node **root, int data) {
  if (!*root) {
    *root = create_node(data);
  } else {
    if (data < (*root)->data) {
      insert(&(*root)->left, data);
    } else {
      insert(&(*root)->right, data);
    }
  }
}

void delete_node(node *root, int data) {
  if (!root)
    return;

  if (data < root->data) {
    delete_node(root->left, data);
  } else if (data > root->data) {
    delete_node(root->right, data);
  } else {
    free(root);
  }
}

void delete_tree(node *root) {
  if (!root)
    return;

  delete_tree(root->left);
  delete_tree(root->right);
  free(root);
}
