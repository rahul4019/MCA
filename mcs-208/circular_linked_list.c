

#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};

typedef struct node clist;

clist *create_node(int data) {
  clist *new_node = (clist *)malloc(sizeof(clist));

  new_node->data = data;
  new_node->next = NULL;

  return new_node;
}

void append_node(clist **head, int data) {
  clist *new_node = create_node(data);

  if (*head == NULL) {
    *head = new_node;
    new_node->next = *head; // pointing to itself
    return;
  }

  clist *temp = *head;

  while (temp->next != *head) {
    temp = temp->next;
  }

  temp->next = new_node;
  new_node->next = *head;
}

void insert_node(clist **head) {
  int key, element;

  clist *temp = *head;

  printf("enter key: ");
  scanf("%d", &key);

  printf("enter value: ");
  scanf("%d", &element);

  if (temp->data == key) {
    clist *new_node = create_node(element);
    new_node->next = temp->next;
    temp->next = new_node;
    return;
  }

  do {
    if (temp->data == key) {

      clist *new_node = create_node(element);
      new_node->next = temp->next;
      temp->next = new_node;
      return;
    }
    temp = temp->next;

  } while (temp != *head);
}
void traverse(clist *start) {
  if (start == NULL) {
    printf("the list is empty: \n");
  }

  clist *temp = start;

  while (temp->next != start) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }

  printf("%d->", temp->data);
  printf(" back to head\n");

  /* do { */
  /*   printf("%d->", temp->data); */
  /*   temp = temp->next; */
  /* } while (temp != start); */
}

int main() {

  clist *head = NULL;

  int element = 0;
  while (element != -1) {
    printf("enter the element: ");
    scanf("%d", &element);

    if (element == -1) {
      break;
    }

    append_node(&head, element);
  }

  insert_node(&head);

  traverse(head);

  return 0;
}
