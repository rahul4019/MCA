#include <stdio.h>
#include <stdlib.h>

// structure of node
struct node {
  int data;
  struct node *next;
};

// creates the node
struct node *create_node(int data) {

  struct node *new_node;
  new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;

  return new_node;
}

// FOUND DIFFICULT TO UNDERSTAND
// function to add a node at the end of the linked list
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

struct node *find(struct node *start, int key) {
  while (start != NULL) {
    if (start->data == key) {
      return start;
    }
    start = start->next;
  }
  return NULL;
}

void insert_node(struct node **head) {
  int key, element;

  printf("enter the key: ");
  scanf("%d", &key);

  printf("enter the element: ");
  scanf("%d", &element);

  /* handle the case when head is having the key */
  if ((*head)->data == key) {
    struct node *new_node = create_node(element);

    new_node->next = *head;
    *head = new_node;
    return;
  }

  struct node *ptr = find((*head)->next, key);

  if (ptr == NULL) {
    printf("key not found in the list\n");
    return;
  }

  struct node *new_node = create_node(element);
  new_node->next = ptr->next;
  ptr->next = new_node;
}

void delete(struct node **head) {
  int key;
  printf("enter the value of element to be deleted\n");
  scanf("%d", &key);

  // handle the case if the head is having the value
  if ((*head)->data == key) {
    *head = (*head)->next;
    return;
  }

  /* struct node *ptr = find() */
}

// prints the LL
void traverse(struct node *head) {
  struct node *start = head;

  while (start != NULL) {
    printf("%d->", start->data);
    start = start->next;
  }

  printf("NULL\n");
}

int main() {
  struct node *head = NULL;
  int element = 0;
  while (element != -1) {
    printf("enter the element, enter -1 to exit the loop\n");
    scanf("%d", &element);
    if (element == -1) {
      break;
    }
    append_node(&head, element); // here we are passing address of the new node
  }

  insert_node(&head);
  /* delete (&head); */

  traverse(head);
}
