#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *create_node(int data) {
  struct node *new_node; // create a pointer of type struct node
  new_node = (struct node *)malloc(
      sizeof(struct node)); // create a new node in the heap memory

  new_node->data = data;
  new_node->next = NULL;

  return new_node; // return the pointer
}

// appends the node at the end
void append_node(struct node **head, int data) {
  struct node *new_node = create_node(data);

  if (*head == NULL) {
    *head = new_node;
    return;
  }

  struct node *temp = *head;

  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = new_node;
}

// find the node and returns its pointer
struct node *find(struct node *start, int key) {
  struct node *temp = start;
  while (temp != NULL) {
    if (temp->data == key) {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

// inserts the node on finding the key inside node's data
void insert_node(struct node **head) {
  int key, element;

  printf("enter the key: ");
  scanf("%d", &key);

  printf("enter the element: ");
  scanf("%d", &element);

  // handle the case if the head is having the key
  if ((*head)->data == key) {
    struct node *new_node = create_node(element);
    new_node->next = *head;
    *head = new_node;
  }

  struct node *ptr = find((*head)->next, key);

  if (ptr == NULL) {
    printf("key not found\n");
  }

  struct node *new_node = create_node(element);
  new_node->next = ptr->next;
  ptr->next = new_node;
}

void traverse(struct node *head) {
  struct node *temp = head;

  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

int main() {
  struct node *head = NULL;

  int element = 0;

  while (element != -1) {
    printf("enter the element, enter -1 to exit the loop: ");
    scanf("%d", &element);

    if (element == -1) {
      break;
    }
    append_node(&head, element);
  }

  insert_node(&head);

  traverse(head);
}
