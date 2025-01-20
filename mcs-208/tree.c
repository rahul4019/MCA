#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *left;
  struct node *right;
};

typedef struct node node;

node *create_node(int data) {
  node *new_node = (node *)malloc(sizeof(node));

  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;

  return new_node;
}

node *insert_node(node *root, int data) {
  if (root == NULL) {
    return create_node(data);
  }

  if (data < root->data) {
    root->left = insert_node(root->left, data);

  } else {
    root->right = insert_node(root->right, data);
  }
  return root;
}

void inorder_traversal(node *root) {
  if (root == NULL) {
    return;
  }

  inorder_traversal(root->left);
  printf("%d\n", root->data);
  inorder_traversal(root->right);
}

void postorder_traversal(node *root) {
  if (root == NULL) {
    return;
  }

  postorder_traversal(root->left);
  postorder_traversal(root->right);
  printf("%d\n", root->data);
}

void preorder_traversal(node *root) {
  if (root == NULL) {
    return;
  }

  printf("%d\n", root->data);
  preorder_traversal(root->left);
  preorder_traversal(root->right);
}

int main() {
  node *root = NULL;

  root = insert_node(root, 1);
  root = insert_node(root, 2);
  root = insert_node(root, 3);
  root = insert_node(root, 4);
  root = insert_node(root, 5);
  root = insert_node(root, 6);

  printf("inorder traversal\n");
  /* inorder_traversal(root); */
  /* postorder_traversal(root); */
  preorder_traversal(root);

  return 0;
}
